```c++
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 7}; 
    vector<int> leaders = leaders(arr);
    for (int i : leaders) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 0) return res; // Handle edge case
    
    res.push_back(arr[n-1]); // Rightmost element is always a leader.
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[i+1]) {
            res.push_back(arr[i]);
        }
    }
    
    reverse(res.begin(), res.end()); // Reverse the result to get the correct order
    return res;
}
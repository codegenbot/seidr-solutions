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
    
    if(n == 1) return arr; // Special case: single element array
    
    int lastLeader = arr[n-1]; // Rightmost is always a leader
    res.push_back(lastLeader);
    
    for (int i = n - 2; i >= 0; i--) {
        if(arr[i] >= lastLeader) {
            res.push_back(arr[i]);
            lastLeader = arr[i];
        }
    }
    
    reverse(res.begin(), res.end()); // Reverse the result
    return res;
}
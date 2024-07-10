```c++
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if(n == 0) return result; // Return empty list if array is empty
    int max_right = arr[n-1]; // Initialize the maximum number on right side as last element of array
    result.push_back(max_right); // Add this number to the leaders list
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= max_right){ 
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}
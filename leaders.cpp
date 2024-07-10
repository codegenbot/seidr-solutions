#include <vector>
#include <iostream> 
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    int currMax = arr[n - 1];
    result.push_back(currMax);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= currMax) {
            currMax = arr[i];
            result.push_back(currMax);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
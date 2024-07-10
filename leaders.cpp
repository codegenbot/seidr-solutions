#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
    
    int lastLeaderIndex = n - 1; // The rightmost element is always a leader.
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[lastLeaderIndex]) {
            lastLeaderIndex = i;
        }
    }
    
    while(lastLeaderIndex >= 0) {
        result.push_back(arr[lastLeaderIndex]);
        lastLeaderIndex--;
    }
    
    return result;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> result = leaders(arr);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}
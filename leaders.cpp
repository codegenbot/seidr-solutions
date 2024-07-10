#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            result.push_back(arr[i]);
    }
    
    return result;

}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    result.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[n - 1])
            result.push_back(arr[i]);
        else
            break;
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
#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int curr_leader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= curr_leader) {
            curr_leader = arr[i];
            result.push_back(curr_leader);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
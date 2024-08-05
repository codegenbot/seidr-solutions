#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    vector<int> leadersVec;
    
    for (int i = 0; i < n; ++i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leadersVec.push_back(arr[i]);
        }
    }
    
    return leadersVec;
}
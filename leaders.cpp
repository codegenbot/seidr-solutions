#include <vector>

int main() {
    std::vector<int> arr = {19}; 
    std::vector<int> result;
    for (int i = 0; i < arr.size(); ++i) {
        bool isLeader = true;
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(arr[i]);
    }
    return 0;
}
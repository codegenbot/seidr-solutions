```cpp
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 4, 2};
    std::vector<int> leaders = leaders(arr);
    for (int i : leaders) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=0; i<n; i++) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    return result;
}
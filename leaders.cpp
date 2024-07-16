```cpp
#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;

    int max_right = arr[n-1];
    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    std::vector<int> leadersVector = leaders(arr);
    for(int i=0; i<leadersVector.size(); i++) {
        std::cout << leadersVector[i] << " ";
    }
    return 0;
}
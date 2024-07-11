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

    result.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}
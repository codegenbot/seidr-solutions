```cpp
#include <vector>
#include <utility>

std::pair<int, int> result(const std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] % 2 == 1) {
            return {arr[i], i};
        }
    }
    return {-1, -1}; // or any other default value
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
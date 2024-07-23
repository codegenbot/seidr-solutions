```cpp
#include <vector>
#include <utility>

std::vector<std::pair<int, int>> result(const std::vector<int>& arr) {
    std::vector<std::pair<int, int>> output;
    for (int i = 0; i < arr.size(); ++i) {
        if (issame({arr[i], i}, {1, 2})) {
            output.push_back(std::make_pair(arr[i], i));
        }
    }
    return output;
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return (a.first == b.first && a.second == b.second);
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}
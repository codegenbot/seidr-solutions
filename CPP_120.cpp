```cpp
#include <vector>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> problemMain(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    std::vector<int> test = problemMain({1, 2, 3, -23, 243, -400, 0}, 5);
    for (auto i : test) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
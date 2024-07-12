```cpp
#include <vector>
#include <algorithm>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::unordered_set<int> result(vec.begin(), vec.end());
    return std::vector<int>(result.begin(), result.end());
}

int main() {
    std::vector<int> test1(1,2,3,2,4,3,5);
    std::vector<int> test2 = remove_duplicates(test1);
    if (issame(test1,test2)) {
        for (int i : test2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}
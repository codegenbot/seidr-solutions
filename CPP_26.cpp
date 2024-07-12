#include <vector>
#include <algorithm>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::unordered_set<int> result(vec.begin(), vec.end());
    return std::vector<int>(result.begin(), result.end());
}

int main() {
    std::vector<int> test1;
    for (int i : {1, 2, 3, 2, 4, 3, 5}) {
        test1.push_back(i);
    }
    std::vector<int> test2;
    for (int i : {1, 2, 3, 4, 5}) {
        test2.push_back(i);
    }
    if (issame(test1, test2)) {
        for (int i : test1) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}
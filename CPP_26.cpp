```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int i : vec) {
        if (std::find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

{
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    std::vector<int> test2 = {1, 2, 3, 4, 5};
    if (issame(test1, test2)) {
        for (int i : test1) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
}
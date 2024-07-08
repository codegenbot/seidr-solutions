```cpp
#include <vector>
#include <any>
#include <initializer_list>
#include <cctype>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterIntegers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (int i = 0; i < values.size(); i++) {
        if (values[i].type() == typeid(int)) {
            int x = std::any_cast<int>(values[i]);
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {3, 3, 3};
    assert(issame(filterIntegers({3, 'c', 3, 3, 'a', 'b'}), a));
    return 0;
}
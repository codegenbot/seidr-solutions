```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::initializer_list<int> a, std::initializer_list<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = {};
    for (int num : numbers) {
        bool duplicate = false;
        for (int i = 0; i < result.size(); ++i) {
            if (issame({num}, {result[i]})) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> no_duplicates = remove_duplicates(numbers);
    for (int num : no_duplicates) {
        std::cout << num << " ";
    }
    std::cout << endl;
    return 0;
}
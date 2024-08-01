```cpp
#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}

#include <iostream>
int main() {
    std::list<std::any> values = {3, 'c', 3, 3, 'a', 'b'};
    std::vector<int> integers = filter_integers(values);
    for (const auto& num : integers) {
        std::cout << num << " ";
    }
    return 0;
}
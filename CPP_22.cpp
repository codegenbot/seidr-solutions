```cpp
#include <vector>
#include <list>
#include <any>

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            bool found = false;
            for (const auto& num2 : result) {
                if (areEqual({num}, {num2})) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(num);
            }
        }
    }
    return result;
}
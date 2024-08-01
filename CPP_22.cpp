```cpp
#include <iostream>
#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<std::any> values = {1, 2, 3, 4, 5};
    std::vector<int> filteredValues = filter_integers(values);
    
    if (issame(filteredValues, {1, 2, 3, 4, 5})) {
        for (int val : filteredValues) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Filtering failed" << std::endl;
    }

    return 0;
}
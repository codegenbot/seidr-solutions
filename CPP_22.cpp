```cpp
#include <iostream>
#include <vector>
#include <any>

bool issame(std::vector<int> a) {
    return a.size() == 1 && a[0] == 3;
}

std::vector<std::any> filter_integers(std::vector<std::any> values) {
    std::vector<std::any> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int val = std::any_cast<int>(value);
                if(result.empty() || val > 0) {
                    result.push_back(value); 
                }
            } catch (...) {
                continue;
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::any> values = {static_cast<std::any>(3), 'c', static_cast<std::any>(3), 3, 'a', 'b'};
    if (!issame(std::vector<int>(filter_integers(values)))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}
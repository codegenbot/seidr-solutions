```cpp
#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = std::any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<std::any> values = {1, 2, 3, 4.5};
    std::vector<int> integers = filter_integers(values);
    
    if (issame({1, 2}, integers)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are not the same." << std::endl;
    }
}
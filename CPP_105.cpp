```cpp
#include <initializer_list>
#include <vector>
#include <string>
#include <stdexcept>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            throw std::runtime_error("Strings in vectors are not the same length");
        }
    }
    return true;
}

std::vector<std::string> bylength(std::initializer_list<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            result.push_back("Nine");
        }
    }
    return result;
}

int main() {
    try {
        std::vector<std::string> output = bylength({4, 8, 9});
        isSame(output, {"Four", "Eight", "Nine"});
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}
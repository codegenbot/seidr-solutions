```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> byLength(int lengths) {
    std::vector<std::string> result;
    for (int length : {4, 8, 9}) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            std::vector<std::string> temp;
            for(int i = 0; i < length; i++) {
                temp.push_back("Nine");
            }
            result.insert(result.end(), temp.begin(), temp.end());
        }
    }
    return result;
}

int main() {
    try {
        std::vector<std::string> output = byLength(3);
        if (!issame(output, {"Nine", "Nine", "Nine"})) {
            throw std::runtime_error("Test failed");
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}
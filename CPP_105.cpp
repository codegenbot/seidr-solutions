```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& lengths) {
    std::vector<std::string> result;
    for(int length : lengths) {
        if (length == 4) {
            result.push_back("Four");
        } else if (length == 8) {
            result.push_back("Eight");
        } else if (length == 9) {
            for(int i = 0; i < length; i++) {
                result.push_back("Nine");
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> lengths = {9, 4, 8};
    int result = by_length(lengths).size();
    
    std::vector<std::vector<std::string>> a({{result}});
    std::vector<std::vector<std::string>> b({{result}});
    
    std::cout << "Is same: " << (issame(a, b) ? "true" : "false") << std::endl;
}
```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> str, std::string substr) {
    std::vector<std::string> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            result.push_back(s);
        }
    }
    return {std::views::all(result)};
}

int main() {
}
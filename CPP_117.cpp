#include <initializer_list>

#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::string& b);

std::vector<std::string> select_words(std::string s, int n);

std::string Join(const std::vector<std::string>& vec, char separator) {
    std::string result = "";
    for (const auto& str : vec) {
        if (!result.empty()) {
            result += separator;
        }
        result += str;
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::string& b) { 
    if(a.size() != 1) return false;
    for(int i = 0; i < a[0].size(); i++) {
        if(a[0][i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> result = select_words("a b c d e f", 1);
    assert(issame(result, "b")); 
    std::cout << "{" + Join(result, ", ") + "}" << std::endl;
    return 0;
}
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    if(a.empty()) return true;
    for(auto s : a){
        if(s.size() > 1 || s[0] >= 'A' && s[0] <= 'H') return false;
    }
    return true;
}

bool bf(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> code(const std::string& s1, const std::string& s2) {
    std::vector<std::string> res;
    for (char c : s1 + s2) {
        if (c >= 'A' && c <= 'H') {
            res.push_back(std::to_string((c - 'A' + 1)));
        } else {
            res.push_back(std::string(1, c));
        }
    }
    return res;
}

int main() {
    assert(bf("Jupiter", "Makemake") == std::vector<std::string>());
    
    // Input strings
    std::string s1, s2;
    std::cout << "Enter first string: ";
    std::cin >> s1;
    std::cout << "Enter second string: ";
    std::cin >> s2;

    // Generate the code for both input strings
    std::vector<std::string> result = code(s1, s2);

    // Print the output
    std::cout << "Generated Code: ";
    for (const auto& str : result) {
        std::cout << str;
    }
    std::cout << std::endl;

    return 0;
}
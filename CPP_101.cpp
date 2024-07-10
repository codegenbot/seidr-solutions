#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (std::string(a[i]) == "" || std::string(b[i]) == "") {
            if ((a[i] != b[i]))
                return false;
        } else {
            if (a[i] != b[i])
                return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<std::string> words_string;
    std::cout << "Enter words (space separated): ";
    std::string input;
    getline(std::cin, input);
    std::istringstream iss(input);
    for (std::string s; iss >> s;) {
        words_string.push_back(s);
    }
    
    assert(issame(words_string, {"ahmed", "gamal"}));
}
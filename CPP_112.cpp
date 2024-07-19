```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& t) {
    std::vector<std::string> result;
    for(int i = 0; i < s.size(); i++) {
        if(std::find(t.begin(), t.end(), s.substr(i, 1)) == t.end()) {
            result.push_back(s.substr(i));
            break;
        }
        else if(i == s.size() - 1) {
            result.push_back(s);
        }
    }
    return result;
}

int main {
    std::string s, t;
    std::cout << "Enter the first string: ";
    std::cin >> s;
    std::cout << "Enter the second string: ";
    std::cin >> t;
    if(issame(std::vector<std::string>(1,s), std::vector<std::string>(1,t))) {
        std::cout << "The reversed and deleted string is: ";
        for(auto str : reverse_delete(s, t)) {
            for(int i = str.size() - 1; i >= 0; --i) {
                std::cout << str[i];
            }
            std::cout << "\n";
        }
    } else {
        std::cout << "The strings are not the same.\n";
    }
}
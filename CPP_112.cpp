#include <vector>
#include <string>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
        bool found = false;
        for(int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(s.substr(i));
            break;
        }
    }
    return result;
}

int main() {
    std::string s, t;
    std::cout << "Enter the first string: ";
    std::cin >> s;
    std::cout << "Enter the second string: ";
    std::cin >> t;
    if(issame({s}, {t})) {
        std::vector<std::string> res = reverse_delete(s, t);
        for(auto str : res) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }
}
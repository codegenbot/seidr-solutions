#include <vector>
#include <string>

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
    int i = 0;
    while(i < s.size()) {
        bool found = false;
        for(int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                found = true;
                i++;
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
    std::vector<std::string> s, t;
    std::cout << "Enter the first string: ";
    for(std::string str;std::getline(std::cin, str);s.push_back(str));
    std::cout << "Enter the second string: ";
    for(std::string str;std::getline(std::cin, str);t.push_back(str));
    if(issame(s,t)) {
        int i = 0;
        while(i < s[0].size()) {
            bool found = false;
            for(int j = 0; j < t[0].size(); j++) {
                if(s[0][i] == t[0][j]) {
                    found = true;
                    break;
                }
                i++;
            }
            if(!found) {
                std::cout << s[0].substr(i) << " ";
                break;
            }
        }
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }
    return 0;
}
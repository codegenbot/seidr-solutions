#include <vector>
#include <string>

bool compareVectors(std::vector<std::string> a, std::vector<std::string> b) {
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
    std::string s, t;
    std::cout << "Enter the first string: ";
    std::cin >> s;
    std::cout << "Enter the second string: ";
    std::cin >> t;
    if(compareVectors({s}, {t})) {
        int j = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            bool found = false;
            for(int k = 0; k < t.size(); k++) {
                if(s[i] == t[k]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                while(j <= i) {
                    std::cout << s[j];
                    j++;
                }
                std::cout << " ";
                return 0;
            }
        }
        for(int i = 0; i < s.size(); i++) {
            bool found = false;
            for(int k = 0; k < t.size(); k++) {
                if(s[i] == t[k]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                std::cout << s.substr(i);
                return 0;
            }
        }
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }
    return 0;
}
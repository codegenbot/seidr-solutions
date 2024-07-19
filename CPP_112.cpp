```cpp
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
    std::vector<std::string> s, t;
    std::cout << "Enter the first string: ";
    for(std::string str;std::cin >> str;s.push_back(str));
    std::cout << "Enter the second string: ";
    for(std::string str;std::cin >> str;t.push_back(str));
    if(compareVectors({s}, {t})) {
        std::vector<std::string> res = reverse_delete(s[0], t[0]);
        for(auto str : res) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }
    return 0;
}
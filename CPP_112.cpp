#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i<v1.size(); i++)
        if(v1[i] != v2[i])
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
            int temp = i;
            while(i < s.size()) {
                result.push_back(s.substr(temp));
                i++;
            }
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
        std::vector<std::string> result = reverse_delete(s[0], t[0]);
        for(auto str : result)
            std::cout << str << " ";
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }
    return 0;
}
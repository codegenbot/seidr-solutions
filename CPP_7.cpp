#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_strings(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(const auto& s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> str;
    std::cout << "Enter the strings (enter 'stop' to finish): ";
    while(true) {
        std::string s;
        std::cin >> s;
        if(s == "stop")
            break;
        str.push_back(s);
    }
    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;
    std::vector<std::string> filtered = filter_strings(str, substring); 
    assert(issame({},filtered)); 
    return 0;
}
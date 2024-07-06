#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) 
        return false;
    for(int i = 0; i < s1.size(); i++) 
        if (s1[i] != s2[i]) 
            return false;
    return true;
}

int main() {
    std::vector<std::string> strings = {"abc", "xyz", "abcd"};
    std::string substring = "bc";
    
    for(const auto& str : strings) {
        if(isSame(str, substring))
            std::cout << str << "\n";
    }
    return 0;
}
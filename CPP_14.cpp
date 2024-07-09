```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(std::vector<std::string> a) {
    if (a != std::vector<std::string>({"W", "WW", "WWW"})) 
        return false;  // or you can handle the comparison as per your requirement
    
    return true;
}

{
    int main() {
        assert(issame(all_prefixes("WWW")));
        return 0;
    }
}
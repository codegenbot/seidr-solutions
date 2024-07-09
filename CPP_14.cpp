#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool compare(const std::vector<std::string>& a, const std::vector<std::string>& b) {  
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> prefixes;
    prefixes = all_prefixes("WWW");
    assert(compare({ "W", "WW", "WWW" }, prefixes));
    return 0;
}
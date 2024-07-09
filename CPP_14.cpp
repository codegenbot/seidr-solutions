#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b, bool ignoreCase) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!ignoreCase && (a[i].compare(b[i]) != 0)) 
            return false;
        else if (ignoreCase && tolower(a[i]).compare(tolower(b[i])) != 0) 
            return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for(int i = 1; i <= str.length(); i++){
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    if (issame(all_prefixes("WWW"), {"W", "WW", "WWW"})) {
        return 0;
    } else {
        std::cerr << "Test failed!" << std::endl;
        return 1;
    }
}
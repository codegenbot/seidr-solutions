#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

bool issame(const std::string& s1, const std::string& s2) {
    if(s1.size() != s2.size()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) {
            return false;
        }
    }
    return true;

}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}
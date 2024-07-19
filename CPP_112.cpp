#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& t) {
    std::vector<std::string> result;
    for(int i = 0; i < s.size(); i++) {
        if(std::find(t.begin(), t.end(), s.substr(i, 1)) == t.end()) {
            result.push_back(s.substr(i));
            break;
        }
        else if(i == s.size() - 1) {
            result.push_back(s);
        }
    }
    return result;
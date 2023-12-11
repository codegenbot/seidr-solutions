#include <vector>
#include <string>

bool is_same(const pmr::vector<string>& a, const pmr::vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0) {
            return false;
        }
    }
    return true;
}

pmr::vector<string> total_match(const pmr::vector<string>& a, const pmr::vector<string>& b) {
    pmr::vector<string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}
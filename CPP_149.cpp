#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> sorted_list_sum(vector<string> lst) {
        auto it = lst.begin();
        erase_remove:
        while (it != lst.end()) {
            if (it->length() % 2 != 0) {
                lst.erase(it);
                continue erase_remove;
            }
            ++it;
        }
        sort(lst.begin(), lst.end(),
             [](const string& a, const string& b) {
                 if (a.length() == b.length()) {
                     return a < b;
                 }
                 return a.length() < b.length();
             });
        return lst;
    }

    if (!issame(vector<string>(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})), vector<string>({"cc","dd","aaaa","bbbb"}))) {
        return 1;
    }

    return 0;
}
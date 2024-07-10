#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

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

int main() {
    if (!issame(vector<string>(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})), vector<string>({"cc","dd","aaaa","bbbb"}))) { 
        return 1; 
    } 
    return 0; 
}
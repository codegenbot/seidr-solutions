#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(), 
                         [](const string& a, const string& b){ return a.size() % 2 == 0 && b.size() % 2 != 0 || a.size() % 2 != 0 && b.size() % 2 == 0; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(), 
              [](const string& a, const string& b){ return a.size() == b.size() ? a < b : a.size() < b.size(); });
    return lst;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}
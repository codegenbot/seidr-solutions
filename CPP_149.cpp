#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (stoi(*it) % 2 != 0) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }

    std::sort(lst.begin(), lst.end(),
              [](const string& a, const string& b) {
                  return stol(a) < stol(b);
              });

    return lst;
}
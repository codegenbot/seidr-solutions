#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    vector<string> result;

    for (const auto& str : lst1) {
        if (!issame(lst1, lst2)) {
            return lst1;
        }
    }

    for (const auto& str : lst2) {
        if (!issame(lst1, lst2)) {
            return lst2;
        }
    }

    return lst1;
}
#include <initializer_list>
#include <cassert>
#include <vector>

std::string exchange(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return "NO";
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            return "YES";
        }
    }
    return "NO";
}
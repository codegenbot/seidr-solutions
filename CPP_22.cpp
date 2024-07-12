#include <boost/type_index.hpp>
#include <vector>
#include <list>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::list<std::any> values = {3, 3, 3};
    std::vector<int> filteredValues = filter_integers(values);
    bool same = issame({1, 2}, {1, 2});
    return 0;
}
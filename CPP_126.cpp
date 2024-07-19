#include <algorithm>
#include <initializer_list>

bool is_sorted(std::initializer_list<int> lst) {
    return std::is_sorted(lst.begin(), lst.end()) && std::unique(lst.begin(), lst.end()) == lst.end();
}
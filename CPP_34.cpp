#include <algorithm>
#include <vector>

std::vector<int> removeDuplicates(std::vector<int>& l) {
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}
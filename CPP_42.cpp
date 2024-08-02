#include <vector>

bool std::issame(const std::vector<int>& a std::vector<int>& b) {
    return a == b;
}

std::vector<int> std::incr_list(std::vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}
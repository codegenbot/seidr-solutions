#include <vector>
std::vector<int> incr_list(std::vector<int> l);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> incr_b = incr_list(b);
    return a == incr_b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}
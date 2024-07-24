#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> a_sorted = a;
    std::vector<std::string> b_sorted = b;
    
    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());
    
    return a_sorted == b_sorted;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}
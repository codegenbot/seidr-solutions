#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> temp_a = a;
    std::vector<std::string> temp_b = b;
    
    std::sort(temp_a.begin(), temp_a.end());
    std::sort(temp_b.begin(), temp_b.end());

    return temp_a == temp_b;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}));
}
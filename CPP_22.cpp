#include <vector>
#include <algorithm>
#include <cassert>
#include <cctype>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<char>& input) {
    std::vector<int> result;
    for (char ch : input) {
        if (std::isdigit(ch)) {
            result.push_back(ch - '0');
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({'3', 'c', '3', '3', 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}
#include <vector>
#define _MSC_VER 1900
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()))
        return true;
    else
        return false;
}

int even_odd_count(int num) {
    int count_even = 0, count_odd = 0;
    std::string str_num = std::to_string(std::abs(num));
    for (char c : str_num) {
        if ((c - '0') % 2 == 0)
            ++count_even;
        else
            ++count_odd;
    }
    return std::max(count_even, count_odd);
}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>{1, 0}));
    return 0;
}
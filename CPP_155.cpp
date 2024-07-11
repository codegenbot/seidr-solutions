#include <vector>
#include <string>
#include <algorithm>

namespace std {
    bool operator==(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
}

int issame(int count_even, int count_odd) {
    return (count_even != count_odd);
}

std::vector<int> even_odd_count(int num) {
    int count_even = 0, count_odd = 0;
    std::string str_num = std::to_string(std::abs(num));
    for (char c : str_num) {
        if ((c - '0') % 2 == 0)
            ++count_even;
        else
            ++count_odd;
    }
    return {count_even, count_odd};
}

int main() {
    int count[] = even_odd_count(0);
    assert (issame(count[0], count[1]));
    return 0;
}
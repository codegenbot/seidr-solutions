#include <vector>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

std::pair<int, int> even_odd_count(int num) {
    int count_even = 0, count_odd = 0;
    string str_num = to_string(abs(num));
    for (char c : str_num) {
        if ((c - '0') % 2 == 0)
            ++count_even;
        else
            ++count_odd;
    }
    return {count_even, count_odd};
}

int main() {
    assert(even_odd_count(0).first == 1 && even_odd_count(0).second == 0);
    return 0;
}
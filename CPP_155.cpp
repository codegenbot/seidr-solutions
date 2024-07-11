```cpp
#include <vector>
#include <string>

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

bool isSame(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

int main() {
    assert(isSame(even_odd_count(0), {1, 0}));
    return 0;
}
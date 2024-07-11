```cpp
#include <vector>
#include <string>

int issame(int a, int b) {
    return (a != b);
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
    std::vector<int> count = even_odd_count(0);
    int same_or_diff = (count[0] != count[1]) ? 1 : 0;
    assert(same_or_diff == 0); // or any other desired comparison
    return 0;
}
```c++
#include <vector>
#include <string>
#include <initializer_list>

int issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() == b.size()) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return -1;
            }
        }
        return 0;
    } else {
        return -1;
    }
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

int main(int argc, char* argv[]) {
    assert(even_odd_count(0) == std::vector<int>{1, 0});
    return 0;
}
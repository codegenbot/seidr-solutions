```cpp
#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}

int main() {
    assert(std::equal(even_odd_count(0).begin(), even_odd_count(0).end(), {1, 0}));
}
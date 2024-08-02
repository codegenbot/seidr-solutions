```cpp
#include <vector>
#include <algorithm>
#include <bitset>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_vector(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (std::count(std::bitset<32>(a).to_string().find('1'), 0, -1) <
            std::count(std::bitset<32>(b).to_string().find('1'), 0, -1))
            return true;
        else if (std::count(std::bitset<32>(a).to_string().find('1'), 0, -1) ==
                 std::count(std::bitset<32>(b).to_string().find('1'), 0, -1))
            return a < b;
        return false;
    });
    return arr;
}

int main() {
    assert(issame(sort_vector({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}
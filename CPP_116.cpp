#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> result = arr;
    std::sort(result.begin(), result.end(),
         [](int a, int b) {
             return std::bitset<32>(a).count() < std::bitset<32>(b).count()
                 || (std::bitset<32>(a).count() == std::bitset<32>(b).count() && a < b);
         });
    return result;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
}
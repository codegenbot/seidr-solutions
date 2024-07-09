#include <string>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a != b)
        return false;
    return true;
}

std::vector<int> sortArray(std::vector<int> arr) {
    auto comp = [&] (int a, int b) -> bool {
        if (std::bitset<32>(a).count() != std::bitset<32>(b).count()) {
            return std::bitset<32>(a).count() < std::bitset<32>(b).count();
        } else {
            return a < b;
        }
    };
    std::sort(arr.begin(), arr.end(), comp);
    return arr;
}

int main() {
    assert(issame(sortArray({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}
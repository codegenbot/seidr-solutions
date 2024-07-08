#include <algorithm>
#include <vector>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sortArray(std::vector<int> arr) {
    auto comp = [&] (int a, int b) {
        if (std::bitset<32>(a).count() != std::bitset<32>(b).count()) {
            return std::bitset<32>(a).count() < std::bitset<32>(b).count();
        } else {
            return a < b;
        }
    };
    sort(arr.begin(), arr.end(), comp);
    return arr;
}

int main() {
    assert(isSame(sortArray({2, 4, 8, 16, 32}), std::vector<int>({2, 4, 8, 16, 32}));
    return 0;
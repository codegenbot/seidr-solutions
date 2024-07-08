#include <vector>
#include <bitset>

int main() {
    std::vector<int> arr = {2,4,8,16,32};
    bool issame = isSame(sortArray(arr), arr);
    return (issame ? 0 : 1);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a != b)
        return false;
    return true;
}

std::vector<int> sortArray(std::vector<int> arr) {
    auto comp = [&] (int a, int b) {
        if (std::bitset<32>(a).count() != std::bitset<32>(b).count()) {
            return std::bitset<32>(a).count() < std::bitset<32>(b).count();
        } else {
            return a < b;
        }
    };
    std::sort(arr.begin(), arr.end(), comp);
    return arr;
}
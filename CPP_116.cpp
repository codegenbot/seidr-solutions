#include <string>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int>& arr) {
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
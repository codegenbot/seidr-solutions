#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (auto it = std::find(b.begin(), b.end(), num); it != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}
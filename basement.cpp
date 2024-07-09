#include <vector>

int basement(const std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1; // not found
}

int main() {
    return basement({1, 2, -3, 4});
}
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    bool result = below_threshold({1, 8, 4, 10}, 10);
    // Process the result as needed
    return 0;
}
#include <vector>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> l = {1, 2, 3, 4, 5};
    int t = 10;

    bool result = below_threshold(l, t);

    return 0;
}
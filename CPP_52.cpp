#include <vector>

bool below_threshold(const vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    // Input handling
    return 0;
}
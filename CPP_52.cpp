#include <iostream>
#include <vector>

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

int main() {
    std::cout << boolalpha << below_threshold({1, 8, 4, 10}, 5) << std::endl;
    return 0;
}
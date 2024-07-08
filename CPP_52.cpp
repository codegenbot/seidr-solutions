#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            std::cout << "Error: At least one number is not below the threshold.\n";
            return false;
        }
    }
    return true;

}

int main() {
    std::vector<int> numbers = {1, 8, 4, 10};
}
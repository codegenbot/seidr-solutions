#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // Example usage
    std::vector<int> evenNumbers = generate_integers(1, 10);
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }

    return 0;
}
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
    int a = 1, b = 10;
    std::vector<int> result = generate_integers(a, b);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
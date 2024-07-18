#include <vector>
#include <climits>

std::vector<int> largest_smallest_integers(std::vector<int> lst);

bool isSame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> input = {10, -5, 15, -20, 8};
    std::vector<int> result = largest_smallest_integers(input);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
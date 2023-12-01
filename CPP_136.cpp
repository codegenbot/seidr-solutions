#include <iostream>
#include <vector>

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int largestNegative = 0;
    int smallestPositive = 0;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] < largestNegative) {
            largestNegative = lst[i];
        }

        if (lst[i] > 0 && (smallestPositive == 0 || lst[i] < smallestPositive)) {
            smallestPositive = lst[i];
        }
    }

    return { largestNegative, smallestPositive };
}

int main() {
    std::vector<int> result = largest_smallest_integers({ -6, -4, -4, -3, -100, 1 });

    assert(result[0] == -3 && result[1] == 1);

    return 0;
}
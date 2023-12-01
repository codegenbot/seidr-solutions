#include <vector>
#include <climits>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result(2, 0);
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] > largestNegative) {
            largestNegative = lst[i];
        }
        if (lst[i] > 0 && lst[i] < smallestPositive) {
            smallestPositive = lst[i];
        }
    }

    result[0] = largestNegative == INT_MIN ? 0 : largestNegative;
    result[1] = smallestPositive == INT_MAX ? 0 : smallestPositive;

    return result;
}

int main() {
    std::vector<int> input = {-6, -4, -4, -3, -100, 1};
    std::vector<int> expectedOutput = {-3, 1};
    
    std::vector<int> result = largest_smallest_integers(input);
    assert(result == expectedOutput);

    return 0;
}
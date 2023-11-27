#include <vector>
#include <cmath>

float median(const std::vector<float>& l) {
    std::vector<float> sortedList = l; // Make a copy of the input list

    std::sort(sortedList.begin(), sortedList.end());

    int n = sortedList.size();

    if (n % 2 == 0) {
        return (sortedList[n/2 - 1] + sortedList[n/2]) / 2.0;
    } else {
        return sortedList[n/2];
    }
}

int main() {
    assert(std::abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);

    return 0;
}
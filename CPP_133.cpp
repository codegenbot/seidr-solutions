#include <cassert> // Add this line to include the assert library

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded = std::round(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    // Add more test cases if needed
    return 0;
}
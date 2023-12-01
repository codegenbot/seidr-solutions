#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Example usage
    std::vector<int> numbers = {123, -45, 6789, 0, -987};
    int result = count_nums(numbers);
    return 0;
}
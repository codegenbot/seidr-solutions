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
        count += (sum > 0) ? 1 : 0;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
}
#include <vector>
#include <cassert>

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
    assert(count_nums(std::vector<int>{1}) == 1);
    assert(count_nums(std::vector<int>{-123, 0, 456, 789}) == 3);
    assert(count_nums(std::vector<int>{100, 200, -300, 0}) == 3);
    assert(count_nums(std::vector<int>{}) == 0);
    assert(count_nums(std::vector<int>{-1, -2, -3}) == 3);
    return 0;
}
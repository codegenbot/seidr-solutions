#include <vector>
#include <cassert>

int count_nums(vector<int> n) {
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        int sum = 0;
        int num = n[i];
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    assert(count_nums({0, 10, 100}) == 3);
    assert(count_nums({-1, -10, -100}) == 3);
    assert(count_nums({123, 456, 789}) == 3);
    assert(count_nums({0, 0, 0, 0, 0}) == 0);
    assert(count_nums({1, 2, 3, 4, 5, 6, 7, 8, 9}) == 9);
    assert(count_nums({-1, -2, -3, -4, -5, -6, -7, -8, -9}) == 9);
    assert(count_nums({0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) == 11);
    assert(count_nums({-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0}) == 11);
    assert(count_nums({0, 100, 1000, 10000, 100000}) == 5);
    assert(count_nums({-1, -100, -1000, -10000, -100000}) == 5);
    assert(count_nums({12345, 67890, 13579, 24680}) == 4);
    assert(count_nums({-12345, -67890, -13579, -24680}) == 4);
    assert(count_nums({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}) == 0);
    assert(count_nums({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}) == 20);

    return 0;
}
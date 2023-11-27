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
    // Add test cases here using assert
    assert(count_nums({1}) == 1);
    assert(count_nums({0, 10, -10}) == 2);
    assert(count_nums({123, -456, 789}) == 3);
    assert(count_nums({0, 0, 0, 0}) == 0);
    assert(count_nums({-1, -2, -3, -4, -5}) == 5);
    assert(count_nums({100, 200, 300, 400, 500}) == 5);

    return 0;
}
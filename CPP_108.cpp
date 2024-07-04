#include <iostream>
#include <vector>
#include <cmath> // for abs()

using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool is_negative = num < 0;
        num = abs(num);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (is_negative) sum = -sum;
        if (sum > 0) ++count;
    }
    return count;
}

int main() {
    assert(count_nums({1, -2, 3, -4, 5}) == 5);
    cout << "All test cases passed!" << endl;
    return 0;
}
Here is the completed code:

#include <vector>
#include <algorithm>

using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sign = 1;
        if (num < 0) {
            sign = -1;
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sign * sum > 0)
            count++;
    }
    return count;
}
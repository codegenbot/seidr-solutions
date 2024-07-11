#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool hasPositiveSum = false;
        long absNum = labs(num);
        while (absNum > 0) {
            int digit = absNum % 10;
            if (digit != 0) hasPositiveSum = true;
            absNum /= 10;
        }
        if (hasPositiveSum) count++;
    }
    return count;
}
#include <vector>
#include <cmath>

int count_nums(const std::vector<int>& n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int numCopy = std::abs(num);
        while (numCopy != 0) {
            sum += numCopy % 10;
            numCopy /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
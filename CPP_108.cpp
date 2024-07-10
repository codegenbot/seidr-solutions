#include <vector>
#include <cmath>

int count_nums(std::vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = std::abs(num);
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
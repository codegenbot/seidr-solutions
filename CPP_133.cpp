#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    int sum = 0;
    for (int num : lst) {
        sum += num * num;
    }
    return sum;
}
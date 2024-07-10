#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    if(lst.empty()) return 0;

    int sum = 0;
    for (int num : lst) {
        int sqrt_num = static_cast<int>(std::sqrt(num)); // Type cast to int here
        sum += sqrt_num * sqrt_num;
    }
    return sum;
}
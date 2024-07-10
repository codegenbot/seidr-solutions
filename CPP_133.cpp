#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    if(lst.empty()) return 0;
    
    int sum = 0;
    for (int num : lst) {
        double sqrt_num = std::sqrt(num);
        sum += sqrt_num * sqrt_num;
    }
    return sum;
}
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(float num : lst){
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1.0, 1.0, 0.0}) == 2);
}
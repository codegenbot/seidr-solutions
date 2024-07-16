#include <vector>
#include <cassert>
#include <cmath>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for(float num : lst){
        if(num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0){
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {2.5, -3.0, 4.0, 5.0, 1.5};
    double odd_sum = double_the_difference(lst);
    return 0;
}
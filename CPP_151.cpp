#include <vector>
#include <cassert>
#include <cmath>

double double_the_difference(vector<float> lst){
    double sum = 0;
    for(float num : lst){
        if(num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0){
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main(){
    vector<float> lst = {1.5, 2.0, 3.0, 4.5, 5.0};
    double odd_sum = double_the_difference(lst);
    return 0;
}
#include <iostream>
#include <vector>

long long double_the_difference(std::vector<double> lst){
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<double> myVector = {(double)1.5, (double)2.7, (double)3.8}; 
    double odd_sum = double_the_difference(myVector); 
    //assert(double_the_difference(myVector) == odd_sum);
    return 0;
}
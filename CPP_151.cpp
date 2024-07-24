#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<long double> lst){
    long long sum = 0;
    for (long double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<long double> myVector; 
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        long double num;
        cin >> num;
        myVector.push_back(num);
    } 
    long long odd_sum = double_the_difference(myVector); 
    assert(double_the_difference(myVector) == odd_sum);
    std::cout << "Sum: " << odd_sum << std::endl;
    return 0;
}
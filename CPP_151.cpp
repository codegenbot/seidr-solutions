#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.7, 4.9};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The odd sum is: " << odd_sum << std::endl;
    return 0;
}
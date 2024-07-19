#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.5f, -4.0f, 5.5f};
    long long result = double_the_difference(lst);
    
    if(result == -1) {
        std::cout << "Failed to read input";
    } else {
        std::cout << "The difference is: " << result;
    }
    
    return 0;
}

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}
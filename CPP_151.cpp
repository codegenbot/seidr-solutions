#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == round(x)){
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.0f, -3.2f, 4.9f};
    long long result = double_the_difference(lst);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == std::round(x)){
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.7f, -0.8f, 2.9f};
    long long result = double_the_difference(lst);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == round(x)){
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, -3.7f, 4.8f, 2.2f, 0.9f};
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
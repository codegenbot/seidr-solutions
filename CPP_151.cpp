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

int main(){
    std::vector<float> vec = {1.5, 3.7, -2.0, 4.9};
    long long result = double_the_difference(vec);
    std::cout << "The doubled difference is: " << result << std::endl;
    return 0;
}
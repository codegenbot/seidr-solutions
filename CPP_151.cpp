#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst; // Declare the variable
    float odd_sum = 0.0f; // Declare the variable

    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += pow(int(x), 2);
    }
    
    assert (double_the_difference(lst) == odd_sum );
    
    return 0;
}
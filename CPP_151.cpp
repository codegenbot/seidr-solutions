```cpp
#include <vector>
#include <assert.h>

long long double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst = {1.5f, 2.3f, 4.8f}; 
    int odd_sum = 0; 

    long long result = double_the_difference(lst); 
    
    assert(result == odd_sum);
    
    return 0;
}

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(int(num) > 0 && int(num) % 2 != 0)
            sum += (int(num) * int(num));
    }
    return sum;
}
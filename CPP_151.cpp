#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5, 5.0};
    long long odd_sum = 1*1 + 5*5; // Calculated manually based on test values
    
    // Test the function
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}
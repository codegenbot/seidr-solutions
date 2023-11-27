#include <cassert>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += std::pow(lst[i], 2);
        }
    }
    
    return sum;
}

int main(){
    std::vector<float> lst = {1.5, 3.0, 2.5, 4.5, 7.8};
    long long odd_sum = 18;
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}

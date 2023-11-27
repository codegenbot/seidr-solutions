#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<float> lst(n);
    for(int i=0; i<n; i++){
        std::cin >> lst[i];
    }
    
    long long odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);
    
    std::cout << odd_sum << std::endl;

    return 0;
}
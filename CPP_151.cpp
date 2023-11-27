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

long long solve(){
    int n;
    std::cin >> n;
    
    std::vector<float> lst(n);
    for(int i=0; i<n; i++){
        std::cin >> lst[i];
    }
    
    long long odd_sum = double_the_difference(lst);

    return odd_sum;
}

long long result = solve();
std::cout << result << std::endl;

return 0;
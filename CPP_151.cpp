#include <vector>
#include <iostream>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(x > 0 && (int)x % 2 != 0)
            sum += (x*x);
    }
    return sum;
}

int main(){
    std::vector<float> lst;
    float num;
    while(std::cin >> num) {
        lst.push_back(num);
    }    
    long long result = double_the_difference(lst); 
    std::cout << result << std::endl; 
    return 0;
}
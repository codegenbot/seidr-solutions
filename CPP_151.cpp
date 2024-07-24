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
    std::cout << "Enter numbers (enter 'q' to quit): ";
    while(true){
        std::cin >> num;
        if(num == 'q')
            break;
        lst.push_back(num);
    }
    long long odd_sum = double_the_difference(lst); 
    return 0;
}
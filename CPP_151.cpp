#include <iostream>
#include <vector>
#include <cmath>

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
    std::vector<float> lst;
    
    // Read input from user and populate 'lst' vector
    int n;
    std::cin >> n;
    for(int i=0; i<n; i++){
        float num;
        std::cin >> num;
        lst.push_back(num);
    }
    
    long long odd_sum = double_the_difference(lst);

    // Perform necessary operations

    std::cout << odd_sum << std::endl;

    return 0;
}
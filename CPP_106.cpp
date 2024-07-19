#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= i; ++j){
                factorial *= j;
            }
            result[i-1] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; ++j){
                sum += j;
            }
            result[i-1] = sum;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> result = f(n);

    for(int i = 0; i < result.size(); ++i){
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
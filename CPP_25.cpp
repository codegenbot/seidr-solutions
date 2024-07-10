#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    int num;
    std::cout << "Enter the number of integers to factorize: ";
    std::cin >> num;

    std::vector<int> inputNumbers;

    for(int i = 0; i < num; ++i){
        int inputNum;
        std::cout << "Enter integer " << i+1 << ": ";
        std::cin >> inputNum;
        inputNumbers.push_back(inputNum);
    }

    assert(issame(factorize(inputNumbers[0]) , {inputNumbers[1], inputNumbers[2], inputNumbers[3]}));
}
#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1){
            bool isPrime = true;
            for(int j = 2; j*j <= i; j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i > maxPrime)maxPrime = i;
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    std::cout << skjkasdkd(lst) << std::endl;
    return 0;
}
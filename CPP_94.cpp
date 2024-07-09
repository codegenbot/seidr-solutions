#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst) {
        if(i > 1) {
            bool isPrime = true;
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    int sum = 0;
    while(maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst = {2,3,4,5,6};
    std::cout << skjkasdkd(lst);
    return 0;
}
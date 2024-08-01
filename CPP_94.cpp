#include <vector>
#include <cmath>

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main() {
    // Your code to get the input and call skjkasdkd function
    // For example:
    std::vector<int> lst = {2,3,4,5,6};
    int output = skjkasdkd(lst);
    std::cout << "The sum of digits is: " << output;
    return 0;
}
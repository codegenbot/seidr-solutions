#include <vector>
#include <initializer_list>
#include <cassert>

int skjkasdkd(std::initializer_list<int> lst){
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

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

int main() {
    std::vector<int> inputVector;
    int num;
    while(true){
        std::cout << "Enter a number (or -1 to stop): ";
        std::cin >> num;
        if(num == -1) break;
        inputVector.push_back(num);
    }
    int result = skjkasdkd(inputVector);
    assert(result == 10);
    { return 0; }
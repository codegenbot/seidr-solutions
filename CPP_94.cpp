int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int num : lst){
        if(num > 1 && isPrime(num)){
            if(num > maxPrime) maxPrime = num;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;

#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst = {2,3,4,5,6};
    int result = skjkasdkd(lst);
    std::cout << "The output is: " << result << std::endl;
    return 0;
}
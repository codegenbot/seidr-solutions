#include <vector>
#include <algorithm>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int num : lst){
        if(isPrime(num) && num > maxPrime)
            maxPrime = num;
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num){
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {127, 97, 8192};
    std::cout << skjkasdkd(numbers) << std::endl;
    return 0;
}
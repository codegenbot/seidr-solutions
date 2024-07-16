#include <vector>
#include <iostream>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i=0; i<lst.size(); i++){
        if(isPrime(lst[i])){
            if(maxPrime < lst[i])
                maxPrime = lst[i];
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime%10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }

    int result = skjkasdkd(lst);

    std::cout << "The sum of the digits is: " << result << "\n";

    return 0;
}
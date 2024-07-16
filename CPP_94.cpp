#include <vector>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int skjkasdkd(std::vector<int> lst) {
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

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    std::cout << "The sum of digits is: " << skjkasdkd(lst) << std::endl;
    return 0;
}
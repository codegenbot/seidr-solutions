#include <vector>
#include <iostream>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    for(int i = 1; i <= n; i++) {
        int num;
        std::cout << "Enter element " << i << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    std::cout << "Sum of digits of the largest prime number is: " << skjkasdkd(lst) << std::endl;
    
    return 0;
}
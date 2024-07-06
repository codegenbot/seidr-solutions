```
#include <iostream>
#include <vector>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int largestPrime(std::vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            maxPrime = i > maxPrime ? i : maxPrime;
        }
    }
    return maxPrime;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        lst.push_back(num);
    }
    
    if (!lst.empty()) {
        int maxPrime = largestPrime(lst);
        if (isPrime(maxPrime)) {
            std::cout << "The sum of digits for the largest prime is: " << sumOfDigits(maxPrime) << std::endl;
        } else {
            std::cout << "No prime number found in the list." << std::endl;
        }
    } else {
        std::cout << "List is empty. Please enter some numbers." << std::endl;
    }
}
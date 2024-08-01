```cpp
#include <vector>
#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime)
                maxPrime = i;
        }
    }
    return maxPrime;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int findSumOfDigits(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    if (maxPrime < 0)
        return -1;
    else
        return sumOfDigits(maxPrime);
}

int main() {
    std::vector<int> numbers;
    int num;
    
    // Read input from user
    std::cout << "Enter the number of integers: ";
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    // Call the function
    int result = findSumOfDigits(numbers);
    
    // Print output
    if (result == -1)
        std::cout << "No prime found in the list.";
    else
        std::cout << "The sum of digits of the largest prime is: " << result;
    
    return 0;
}
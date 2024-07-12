#include <vector>
#include <algorithm>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    lst.resize(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> lst[i];
    }
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    std::cout << "The sum of the digits of the maximum prime number is: " << sum << std::endl;
    return 0;
}
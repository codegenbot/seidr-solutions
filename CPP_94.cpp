```cpp
#include <vector>
#include <iostream>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int max_prime_sum(std::vector<int> lst){
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
    return sum;
}

int solve(std::vector<int> lst){
    int n = 0;
    for(int i : lst){
        n += i;
    }
    if(n == 0) return 0;
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
    return sum;
}

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        // Add the input to the list
        std::vector<int> lst = {num};
        if(i > 0) {
            for(int j = 0; j < i; j++){
                int temp;
                std::cout << "Enter element " << j+1 << ": ";
                std::cin >> temp;
                lst.push_back(temp);
            }
        }
        int result = solve(lst);
        std::cout << "The maximum prime number in the list is: " << result << std::endl;
    }
    return 0;
}
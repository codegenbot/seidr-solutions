#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int max_prime = 0;
    for(int i : lst){
        if(isPrime(i) && i > max_prime)
            max_prime = i;
    }
    int sum_digits = 0;
    while(max_prime > 0){
        sum_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_digits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return false;
    return true;

}
int main() {
    std::vector<int> lst;
    int num;
    std::cout << "Enter numbers, each on a new line: ";
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.empty())
        std::cout << "No primes found." << std::endl;
    else
        std::cout << "Sum of digits in the largest prime number is: " << skjkasdkd(lst) << std::endl;
    
    return 0;
}
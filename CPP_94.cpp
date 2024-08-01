```cpp
#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst) {
        if(i > 1) {
            bool isPrime = true;
            for(int j = 2; j * j <= i && isPrime; j++) {
                if(i % j == 0) {
                    isPrime = false;
                }
            }
            if(isPrime) {
                maxPrime = i;
                break;
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        lst.push_back(num);
    }
    std::cout << "The sum of the digits in the largest prime number is: " << skjkasdkd(lst) << std::endl;
    return 0;
}
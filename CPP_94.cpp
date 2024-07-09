```cpp
#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for(int i : lst) {
        if(i > 1) {
            bool isPrime = true;
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    int sum = 0;
    while(maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    int result = skjkasdkd(lst);
    std::cout << "Sum of digits in the largest prime number is: " << result << std::endl;
    return 0;
}
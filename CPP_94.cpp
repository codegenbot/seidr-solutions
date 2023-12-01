#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;

    for (int num : lst) {
        bool isPrime = true;

        if (num <= 1)
            continue;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime && num > maxPrime)
            maxPrime = num;
    }

    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }

    return sum;
}

int main() {
    std::vector<int> lst = {0,3,2,1,3,5,7,4,5,5,5,2,181,32,4,32,3,2,32,324,4,3};
    std::cout << skjkasdkd(lst) << std::endl;

    return 0;
}
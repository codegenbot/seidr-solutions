#include <iostream>
#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        if(i == 2)
            primes.push_back(i);
        else if(i > 2) {
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
            }
        }
    }
    return primes;
}

bool isSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    vector<int> primes = count_up_to(n);

    for(int prime : primes) {
        std::cout << prime << " ";
    }
    
    vector<int> b = {2, 3, 5, 7};
    if(isSame(primes, b))
        std::cout << "\nThe two vectors are the same." << std::endl;
    else
        std::cout << "\nThe two vectors are not the same." << std::endl;

    return 0;
}
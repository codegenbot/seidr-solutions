#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> count_up_to(int limit) {
    std::vector<int> primes;
    for (int num = 2; num <= limit; ++num) {
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
    }
    return primes;
}
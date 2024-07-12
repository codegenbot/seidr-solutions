#include <vector>
#include <initializer_list>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> lst = {2, 3, 5, 7, 11};
    int result = find_max_prime_sum(lst);
    std::cout << "The sum of the digits of the maximum prime number is: " << result << std::endl;
    return 0;
}

int find_max_prime_sum(std::vector<int> lst){
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
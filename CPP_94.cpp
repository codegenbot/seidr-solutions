#include <vector>

int skjkasdkd(std::vector<int> lst){
    int max_prime = 0;
    for(int i : lst) {
        if(isPrime(i)) {
            if(i > max_prime)
                max_prime = i;
        }
    }
    int sum = 0;
    while(max_prime > 0) {
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if(num <= 1) 
        return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;

int main() {
    std::vector<int> lst = {127, 97, 8192};
    assert(skkkasdkd(lst) == 10);
    return 0;
}
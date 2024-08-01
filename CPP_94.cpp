#include <vector>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int findMaxPrime(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(isPrime(i) && i > max_prime)
            max_prime = i;
    }
    int sum = 0;
    while(max_prime > 0){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

int main() {
    vector<int> lst;
    cout << "Enter numbers (separated by spaces): ";
    for(int i; cin >> i; ) {
        lst.push_back(i);
    }
    cout << "Sum of digits in the largest prime number: " << findMaxPrime(lst) << endl;
    return 0;
}
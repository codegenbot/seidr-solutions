
#include <iostream>
#include <vector>
using namespace std;

vector<int> countUpTo(int n) {
    vector<int> primeNumbers;
    
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            primeNumbers.push_back(i);
        }
    }
    
    return primeNumbers;
}
```
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

int main() {
    assert (issame(countUpTo(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
}
```
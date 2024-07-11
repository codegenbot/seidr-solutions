#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sum = 0;
    while(maxPrime != 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    assert(skkasdkd({127, 97, 8192}) == 10);
    int result = skkasdkd({127, 97, 8192});
    cout << "Hello World!" << endl;
    return result;
}
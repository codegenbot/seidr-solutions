```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int maxPrimeNum = 0;
vector<int> lst;

bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int num, i;
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    for(i = 0; i < num; i++){
        cout << "Enter element " << i+1 << ": ";
        int x; 
        cin >> x; 
        lst.push_back(x);
    }
    for(int j : lst){
        if(isPrime(j) && j > maxPrimeNum)
            maxPrimeNum = j;
    }
    if(maxPrimeNum > 0)
        cout << "The sum of digits of the maximum prime is: " << sumOfDigits(maxPrimeNum) << endl;
    else
        cout << "No primes found in the list." << endl;
    return 0;
}
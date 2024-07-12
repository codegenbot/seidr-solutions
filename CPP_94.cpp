#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int start() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    lst.resize(n);
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> lst[i];
    }
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
    cout << "The sum of the digits of the maximum prime number is: " << sum << endl;
}

int main() {
    start();
    return 0;
}
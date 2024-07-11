#include <iostream>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i:lst){
        if(i > 1 && isPrime(i)){
            if(maxPrime < i)maxPrime = i;
        }
    }
    int sumDigits = 0;
    while(maxPrime > 0){
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    vector<int> lst;
    int num;
    cout << "Enter numbers to check: ";
    while(cin >> num){
        lst.push_back(num);
    }
    cout << "Sum of digits for prime number is: " << skjkasdkd(lst) << endl;
    return 0;
}
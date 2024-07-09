#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int maxPrime(vector<int> lst){
    int maxPrime = 0;
    for(int i=0; i<lst.size(); i++){
        if(isPrime(lst[i])){
            if(maxPrime < lst[i]){
                maxPrime = lst[i];
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main() {
    vector<int> lst;
    cout << "Enter the numbers separated by spaces: ";
    int num;
    while (cin >> num) {
        lst.push_back(num);
    }
    cout << "The sum of digits in the maximum prime number is: " << maxPrime(lst) << endl;
    
    return 0;
}
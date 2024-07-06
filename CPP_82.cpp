#include <iostream>
#include <string>

bool prime_length(string str){
    int len = str.length();
    for(int i = 2; i <= len; i++){
        if(len % i == 0 && isPrime(i))
            return true;
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    if(prime_length(input)) {
        cout << "The length of the string is prime." << endl;
    } else {
        cout << "The length of the string is not prime." << endl;
    }
    
    return 0;
}
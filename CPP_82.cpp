#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str);

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    bool isPrime = prime_length(str);
    return 0;
}

bool prime_length(std::string str){
    int len = static_cast<int>(str.length());
    bool isPrime = false;

    if(len <= 1)
        return false;
    
    for(int i = 2; i*i <= len; i++){
        if(len % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}
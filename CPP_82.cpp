#include<string>
using namespace std;

bool prime_length(string str){
    int len = str.length();
    bool isPrime = true;
    for(int i = 2; i * i <= len; i++){
        if(len % i == 0)
            isPrime = false;
    }
    return isPrime;
}
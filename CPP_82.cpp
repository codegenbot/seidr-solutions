#include<stdio.h>
#include<string>
using namespace std;
bool prime_length(string str){
    int len = str.length();
    if (len <= 1) {
        return false;
    }
    for (int i = 2; i < len; i++) {
        if (len % i == 0) {
            return false;
        }
    }
    return true;
}
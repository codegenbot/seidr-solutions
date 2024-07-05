#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int hex_key(string num) {
    int prime_count = 0;
    for (char c : num) {
        if (c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D') {
            prime_count++;
        }
    }
    return prime_count;
}
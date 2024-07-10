#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int skjkasdkd(vector<int> lst){
    int max_prime = -1;
    for (int num : lst) {
        if (num <= 1) continue;
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime && num > max_prime) {
            max_prime = num;
        }
    }
    if (max_prime == -1) return 0;
    int sum_digits = 0;
    while (max_prime > 0) {
        sum_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_digits;
}
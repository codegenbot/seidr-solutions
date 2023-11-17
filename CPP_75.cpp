/*
Write a function that returns true if the given number is the multiplication of 3 prime numbers
and false otherwise.
Knowing that (a) is less then 100. 
Example:
is_multiply_prime(30) == true
30 = 2 * 3 * 5
*/
#include<stdio.h>
using namespace std;
bool is_multiply_prime(int a){
    bool isPrime = true;
    int temp = a;
    for (int i = 2; i < a; i++) {
        while (temp % i == 0) {
            temp /= i;
            if (i > 100) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) {
            break;
        }
    }
    return isPrime;
}
int main() {
    printf("%d", is_multiply_prime(30));
    return 0;
}

/*
Return true if a given number is prime, and false otherwise.
>>> is_prime(6)
false
>>> is_prime(101)
true
>>> is_prime(11)
true
>>> is_prime(13441)
true
>>> is_prime(61)
true
>>> is_prime(4)
false
>>> is_prime(1)
false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool is_prime(long long n){
    if(n==2)
        return true;
    if(n==1 || n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    printf("%d\n",is_prime(2));
    printf("%d\n",is_prime(1));
    printf("%d\n",is_prime(6));
    printf("%d\n",is_prime(101));
    printf("%d\n",is_prime(11));
    printf("%d\n",is_prime(13441));
    printf("%d\n",is_prime(61));
    printf("%d\n",is_prime(4));
    printf("%d\n",is_prime(1));
    return 0;
}

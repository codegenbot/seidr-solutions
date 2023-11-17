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
using namespace std;
bool is_prime(long long n){
    if(n==2||n==3)
        return true;
    if(n==1||n%2==0||n%3==0)
        return false;
    for(long long i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0)
            return false;
    return true;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",is_prime(n));
    }
}

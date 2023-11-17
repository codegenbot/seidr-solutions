/*
Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13,
but not both.
>>> fizz_buzz(10)
1
>>> fizz_buzz(30)
3
>>> fizz_buzz(31)
4
>>> fizz_buzz(70)
6
>>> fizz_buzz(75)
8
*/
#include<stdio.h>
using namespace std;
int fizz_buzz(int n){
    int i,t,count=0;
    for(i=11;i<=n;i++){
        if(i%11==0 || i%13==0){
            t=i;
            while(t!=0){
                if(t%10==7){
                    count++;
                }
                t/=10;
            }
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fizz_buzz(n));
    return 0;
}

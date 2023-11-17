/*
Return 2^n modulo p (be aware of numerics).
>>> modp(3, 5)
3
>>> modp(1101, 101)
2
>>> modp(0, 101)
1
>>> modp(3, 11)
8
>>> modp(100, 101)
1
*/
#include<stdio.h>
using namespace std;
int modp(int n,int p){
    int x=1;
    while(n>0){
        if(n%2==1){
            x=(x*2)%p;
        }
        n=n/2;
    }
    return x%p;
}
int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d\n",modp(n,p));
}

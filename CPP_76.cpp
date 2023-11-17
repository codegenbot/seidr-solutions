/*
Your task is to write a function that returns true if a number x is a simple
power of n and false in other cases.
x is a simple power of n if n**int=x
For example:
is_simple_power(1, 4) => true
is_simple_power(2, 2) => true
is_simple_power(8, 2) => true
is_simple_power(3, 2) => false
is_simple_power(3, 1) => false
is_simple_power(5, 3) => false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool is_simple_power(int x,int n){
    int i = 0;
    int a = 0;
    for(i = 0; i < x; i++){
        a = pow(n,i);
        if(a == x){
            return true;
        }
    }
    return false;
}

int main(){
    int x = 0;
    int n = 0;
    scanf("%d%d", &x, &n);
    if(is_simple_power(x,n) == true){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

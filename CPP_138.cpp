/*
Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
Example
is_equal_to_sum_even(4) == false
is_equal_to_sum_even(6) == false
is_equal_to_sum_even(8) == true
*/
#include<stdio.h>
using namespace std;
bool is_equal_to_sum_even(int n){
    if(n==0){
        return false;
    }
    else if(n%2!=0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(is_equal_to_sum_even(n)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

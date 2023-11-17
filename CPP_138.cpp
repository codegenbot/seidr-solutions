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
    int sum=0;
    int i=0;
    while(n>0)
    {
        sum+=n%2;
        n=n/2;
        i++;
    }
    if(i==4 && sum==4)
        return true;
    else
        return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(is_equal_to_sum_even(n))
        printf("True");
    else
        printf("False");
    return 0;
}

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
    int i,j,k,l=0,n;
    for(i=2;i<a;i++)
    {
        for(j=2;j<a;j++)
        {
            for(k=2;k<a;k++)
            {
                if((i*j*k)==a)
                {
                    l++;
                }
            }
        }
    }
    if(l>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",is_multiply_prime(a));
    return 0;
}

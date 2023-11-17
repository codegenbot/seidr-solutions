/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<vector>
#include<assert.h>
using namespace std;
long double_the_difference(vector<float> lst){
     long sum=0,l;
     //printf("%f",sizeof(long long));;
     while(lst.size()){
          l=lst[0];
          if(l<0)
               lst.erase(lst.begin());
          else if((int)l!=l)
               lst.erase(lst.begin());
          else
               break;
     }
     //printf("%f",sizeof(l));;
     for(int i=0;i<lst.size();i++){
         l=lst[i];
         if(l<0 || (int)l!=l)
               break;
         sum+=l*l;
     }
    return sum;
}
int main(){
     vector<float> lst = {2.0, -1.0, 5.0, 12, -9.5};
     long odd_sum = 2*(1 * 1 + 5 * 5 + 12 * 12);
     assert (double_the_difference(lst) == odd_sum );
     return 0;
}

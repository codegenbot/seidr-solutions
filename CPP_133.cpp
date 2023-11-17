/*
You are given a vector of numbers.
You need to return the sum of squared numbers in the given vector,
round each element in the vector to the upper int(Ceiling) first.
Examples:
For lst = {1,2,3} the output should be 14
For lst = {1,4,9} the output should be 98
For lst = {1,3,5,7} the output should be 84
For lst = {1.4,4.2,0} the output should be 29
For lst = {-2.4,1,1} the output should be 6


*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
     //returning the sum of squared numbers in the given vector
     //round each element in the vector to the upper int
     float res = 0;
     int i = 0;
     while(i < lst.size()){
          res += (int) ceil(lst[i]) * (int) ceil(lst[i]);
          //printf("%f\n", res);
          i++;
     }
     return res;

    
}
int main(){
     double arr[5] = {1.4, 4.2, 0, 5.6, 6};
     vector<float> v(arr, arr + sizeof(arr)/sizeof(arr[0]));
     printf("%d\n", sum_squares(v));
}
int sum_squares(vector<float> lst){

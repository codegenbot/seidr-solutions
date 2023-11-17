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
#include<math.h>
#include <cassert> 
#include <iostream>
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
  long long sum=0;
  for(int i=0;i<lst.size();i++){
    if(lst[i]>0){
      if(lst[i]==floor(lst[i])){
        if(fmod(lst[i],2)==1){
          sum=sum+pow(lst[i],2);
        }
      }
    }
  }
  return sum;
}
void testing(int actual, int expected){
        	assert( actual == expected );
            if(actual!=expected)
                cout<<actual<< " ACTUAL	 " <<expected<<endl;
        } 
int main(){
        vector<float> lst = {1, 3, 2, 0}; 
				int odd_sum = 1 + 9 + 0 + 0; 
        testing(double_the_difference(lst) , odd_sum);
        return 0; 
			}

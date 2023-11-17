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
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
  long long r=0;
        long long c=0;
        for (int i=0;i<lst.size();i++){
            int x=lst[i];
            if (fmod(x,1)!=0){
                if (x>=0 && fmod(x,2)!=0){
                    r+=pow(x,2);
                    c++;
                }
            }
        }
        return r;
    }

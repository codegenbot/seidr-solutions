/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

odd_squares({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
odd_squares({-1, -2, 0}) == 0
odd_squares({9, -2}) == 81
odd_squares({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long odd_squares(vector<float> lst){
    long long sum=0;
    for(int i=0;i<lst.size();i++){
        if(lst[i]>0 && lst[i]==(int)lst[i])
            sum+=pow(lst[i],2);
    }
    return sum;
}

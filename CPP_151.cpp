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
    long long sum=0;
    for(int i=0;i<lst.size();i++){
        if(lst[i]>0 && lst[i]==(int)lst[i])
            sum+=pow(lst[i],2);
    }
    return sum;
}
#include <iostream>
#include <cassert>
#include <vector>

int main(){
    vector<float> lst = {1, 3, 2, 0};
    long long odd_sum = 1 + 9 + 0 + 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1, -2, 0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {9, -2};
    odd_sum = 81;
    assert (double_the_difference(lst) == odd_sum );

    lst = {0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1, -2, -3, -4};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {0, 2, 4, 6, 8};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1, -3, -5, -7, -9};
    odd_sum = 1 + 9 + 25 + 49 + 81;
    assert (double_the_difference(lst) == odd_sum );
}

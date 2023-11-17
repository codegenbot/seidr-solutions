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
#include<vector>;
#include<iostream>
#include <math.h>

int sum_squares(std::vector<float> lst)
{
   int sum=0;
   for(int i=0;i<lst.size();i++)
   {
        lst[i]=ceil(lst[i]);
        sum+=pow(lst[i],2);
   }
   return sum;
}
int main()
{
    std::vector<float> v;
    v.push_back(1.4);
    v.push_back(4.2);
    v.push_back(0);

    std::cout<<sum_squares(v);

    return 0;
}

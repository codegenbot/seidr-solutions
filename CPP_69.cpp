/*
You are given a non-empty vector of positive integers. Return the greatest integer that is greater than 
zero, and has a frequency greater than or equal to the value of the integer itself. 
The frequency of an integer is the number of times it appears in the vector.
If no such a value exist, return -1.
Examples:
    search({4, 1, 2, 2, 3, 1}) == 2
    search({1, 2, 2, 3, 3, 3, 4, 4, 4}) == 3
    search({5, 5, 4, 4, 4}) == -1
*/
#include<stdio.h>
#include<vector>
using namespace std;
int search(vector<int> lst){
    int i,j,c=0,r;
    for(i=0;i<lst.size();i++)
    {
        for(j=0;j<lst.size();j++)
        {
            if(lst[i]==lst[j])
            {
                c++;
            }
        }
        if(c>=lst[i])
        {
            r=lst[i];
        }
        c=0;
    }
    if(r==0)
    {
        return -1;
    }
    return r;
}

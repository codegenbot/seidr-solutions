/*
From a supplied vector of numbers (of length at least two) select and return two that are the closest to each
other and return them in order (smaller number, larger number).
>>> find_closest_elements({1.0, 2.0, 3.0, 4.0, 5.0, 2.2})
(2.0, 2.2)
>>> find_closest_elements({1.0, 2.0, 3.0, 4.0, 5.0, 2.0})
(2.0, 2.0)
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> find_closest_elements(vector<float> numbers)
{
    int i,j;
    float min=numbers[1]-numbers[0];
    int k=0,l=0;
    for(i=0;i<numbers.size()-1;i++)
    {
        for(j=i+1;j<numbers.size();j++)
        {
            if(abs(numbers[i]-numbers[j])<min)
            {
                min=abs(numbers[i]-numbers[j]);
                k=i;
                l=j;
            }
        }
    }
    if(numbers[k]<numbers[l])
    {
        return {numbers[k],numbers[l]};
    }
    else
    {
        return {numbers[l],numbers[k]};
    }
}

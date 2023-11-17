/*
This function takes a vector l and returns a vector l' such that
l' is identical to l in the odd indicies, while its values at the even indicies are equal
to the values of the even indicies of l, but sorted.
>>> sort_even({1, 2, 3})
{1, 2, 3}
>>> sort_even({5, 6, 3, 4})
{3, 6, 5, 4}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<float> sort_even(vector<float> l){
	int i;
	for(i=0;i<l.size();i++)
	{
		if(i%2==0)
		{
			sort(l.begin(),l.end());
		}
		else
		{
			sort(l.begin(),l.end());
		}
	}
	return l;
}

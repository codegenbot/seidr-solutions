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
	vector<float> l_prime;
	for (int i = 0; i < l.size(); i++){
		if (i % 2 == 0){
			l_prime.push_back(l[i]);
		}
		else{
			vector<float> temp;
			for (int j = 0; j < l.size(); j++){
				if (j % 2 == 0){
					temp.push_back(l[j]);
				}
			}
			sort(temp.begin(), temp.end());
			l_prime.push_back(temp[i/2]);
		}
	}
	return l_prime;
}

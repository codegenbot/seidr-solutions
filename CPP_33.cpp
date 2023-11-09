/*
This function takes a vector l and returns a vector l' such that
l' is identical to l in the indicies that are not divisible by three, while its values at the indicies that are divisible by three are equal
to the values of the corresponding indicies of l, but sorted.
>>> sort_third({1, 2, 3})
{1, 2, 3}
>>> sort_third({5, 6, 3, 4, 8, 9, 2})
{2, 6, 3, 4, 8, 9, 5}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort_third(vector<int> l){
	vector<int> l_prime;
	for(int i = 0; i < l.size(); i++){
		if(i % 3 == 0){
			vector<int> temp;
			temp.push_back(l[i]);
			temp.push_back(l[i+1]);
			temp.push_back(l[i+2]);
			sort(temp.begin(), temp.end());
			l_prime.push_back(temp[0]);
			l_prime.push_back(temp[1]);
			l_prime.push_back(temp[2]);
		}
		else{
			l_prime.push_back(l[i]);
		}
	}
	return l_prime;
}

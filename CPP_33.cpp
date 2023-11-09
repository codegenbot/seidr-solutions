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
	int counter = 0;
	for (int i = 0; i < l.size(); i++) {
		if (i % 3 == 0) {
			sort(l.begin() + counter, l.begin() + counter + 3);
			l_prime.push_back(l[counter]);
			l_prime.push_back(l[counter + 1]);
			l_prime.push_back(l[counter + 2]);
			counter = counter + 3;
		}
		else {
			l_prime.push_back(l[i]);
		}
	}
	return l_prime;
}

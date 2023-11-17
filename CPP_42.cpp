/*
Return vector with elements incremented by 1.
>>> incr_list({1, 2, 3})
{2, 3, 4}
>>> incr_list({5, 3, 5, 2, 3, 3, 9, 0, 123})
{6, 4, 6, 3, 4, 4, 10, 1, 124}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> incr_list(vector<int> l){
	vector<int>::iterator it;
	for(it = l.begin(); it != l.end(); ++it)
		(*it)++;
	return l;
}

int main(){
	vector<int> l = {1, 2, 3};
	vector<int> l2 = {5, 3, 5, 2, 3, 3, 9, 0, 123};
	vector<int> l3 = incr_list(l);
	vector<int> l4 = incr_list(l2);
	printf("{%d, %d, %d}\n", l3[0], l3[1], l3[2]);
	printf("{%d, %d, %d, %d, %d, %d, %d, %d, %d}\n", l4[0], l4[1], l4[2], l4[3], l4[4], l4[5], l4[6], l4[7], l4[8]);
	return 0;
}

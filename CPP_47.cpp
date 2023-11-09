/*
Return median of elements in the vector l.
>>> median({3, 1, 2, 4, 5})
3
>>> median({-10, 4, 6, 1000, 10, 20})
15.0
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
float median(vector<float> l){
	if (l.size() == 0) return 0;
	sort(l.begin(), l.end());
	int mid = l.size() / 2;
	if (l.size() % 2 == 0)
		return (l[mid - 1] + l[mid]) / 2.0;
	else
		return l[mid];
}

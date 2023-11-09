/*
Return sorted unique elements in a vector
>>> unique({5, 3, 5, 2, 3, 3, 9, 0, 123})
{0, 2, 3, 5, 9, 123}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> unique(vector<int> l){
sort(l.begin(), l.end());
vector<int>::iterator it;
it = unique(l.begin(), l.end());
l.resize(distance(l.begin(), it));
return l;
}

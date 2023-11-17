/*
You are given a vector of integers.
Write a function next_smallest() that returns the 2nd smallest element of the vector.
Return None if there is no such element.

next_smallest({1, 2, 3, 4, 5}) == 2
next_smallest({5, 1, 4, 3, 2}) == 2
next_smallest({}) == None
next_smallest({1, 1}) == None
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int next_smallest(vector<int> lst){
	if(lst.size()<2)
		return -1;
	sort(lst.begin(),lst.end());
	int i=0;
	while(i<lst.size()-1){
		if(lst[i]!=lst[i+1])
			return lst[i+1];
		i++;
	}
	return -1;
}
int main(){
	vector<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	printf("%d\n",next_smallest(lst));
	lst.clear();
	lst.push_back(5);
	lst.push_back(1);
	lst.push_back(4);
	lst.push_back(3);
	lst.push_back(2);
	printf("%d\n",next_smallest(lst));
	lst.clear();
	printf("%d\n",next_smallest(lst));
	lst.push_back(1);
	lst.push_back(1);
	printf("%d\n",next_smallest(lst));
	return 0;
}

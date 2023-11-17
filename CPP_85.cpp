/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>

using namespace std;
int add(vector<int> lst){
	int sum = 0;
	for (int i = 0; i < lst.size(); i++) {
		if (lst[i] % 2 == 0 && i % 2 == 1) {
			sum += lst[i];
		}
	}
	return sum;
}
int main(){
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(6);
	v.push_back(7);
	printf("%d", add(v));
	return 0;
}

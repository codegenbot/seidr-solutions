/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
	int e=0, o=0;
	char cha[10];
	itoa(num, cha, 10);
	for(int i=0;cha[i]!='\0';i++){
		if(cha[i]%2==0)
			e++;
		else
			o++;
	}
	vector<int> result;
	result.push_back(e);
	result.push_back(o);
	return result;
}
using namespace std;
vector<int> even_odd_count(int num){

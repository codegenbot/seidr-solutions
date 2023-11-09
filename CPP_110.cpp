/*
In this problem, you will implement a function that takes two vectors of numbers,
and determines whether it is possible to perform an exchange of elements
between them to make lst1 a vector of only even numbers.
There is no limit on the number of exchanged elements between lst1 and lst2.
If it is possible to exchange elements between the lst1 and lst2 to make
all the elements of lst1 to be even, return "YES".
Otherwise, return "NO".
For example:
exchange({1, 2, 3, 4}, {1, 2, 3, 4}) => "YES"
exchange({1, 2, 3, 4}, {1, 5, 3, 4}) => "NO"
It is assumed that the input vectors will be non-empty.
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string exchange(vector<int> lst1,vector<int> lst2){
	int count=0;
	for(int i=0;i<lst1.size();i++){
		if(lst1[i]%2==1){
			for(int j=0;j<lst2.size();j++){
				if(lst2[j]%2==0){
					int temp=lst1[i];
					lst1[i]=lst2[j];
					lst2[j]=temp;
					count++;
					break;
				}
			}
		}
	}
	if(count==lst1.size()){
		return "YES";
	}
	else{
		return "NO";
	}
}

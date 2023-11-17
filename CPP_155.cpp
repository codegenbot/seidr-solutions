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
	int k,d,num0,e=0,f=0;
	k=num;
	num0=num;
	for(d=0;k!=0;d++)
	{
		num=num/10;
		k=k/10;
	}
	vector<int> A(2);
	int s[d];
	for(k=1;k<=d;k++)
		{
			if((num%10)%2==0)
				e++;
			else
				f++;
		}
		A[0]=e;
		A[1]=f;
	return A;
}

int main() {
	vector<int> res;
    
    res = even_odd_count(123);
    printf("{%d,%d}",res[0],res[1]);
}

using namespace std;
vector<int> even_odd_count(int num){

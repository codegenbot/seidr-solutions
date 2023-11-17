/*
Circular shift the digits of the integer x, shift the digits right by shift
and return the result as a string.
If shift > number of digits, return digits reversed.
>>> circular_shift(12, 1)
"21"
>>> circular_shift(12, 2)
"12"
*/
#include<stdio.h>
#include<string>
using namespace std;
string circular_shift(int x,int shift){
	int y,z;
	string s;
	z=x;
	while(z>0){
		y=z%10;
		z=z/10;
		s=s+y;
	}
	if(shift>s.length()){
		return s;
	}else{
		string t;
		t=s.substr(shift,s.length()-shift);
		t=t+s.substr(0,shift);
		return t;
	}
}
int main(){
	int x,shift;
	scanf("%d %d",&x,&shift);
	printf("%s",circular_shift(x,shift));
	return 0;
}

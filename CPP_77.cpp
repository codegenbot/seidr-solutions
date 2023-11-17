/*
Write a function that takes an integer a and returns true 
if this ingeger is a cube of some integer number.
Note: you may assume the input is always valid.
Examples:
iscube(1) ==> true
iscube(2) ==> false
iscube(-1) ==> true
iscube(64) ==> true
iscube(0) ==> true
iscube(180) ==> false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool iscuber(int a){
	if (a == 0) return true;
	int c = pow(a, 1.0 / 3);
	return a == c*c*c;
}
int main(){
	int x = 1;
	if (iscuber(x)) printf("True\n");
	else printf("False\n");
	system("pause");
	return 0;
}

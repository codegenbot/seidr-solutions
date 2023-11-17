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
return (a==0) || (a==1) || (a==-1) || (a==pow(floor(pow(a,1.0/3)),3));
}
int main(){
printf("%d\n",iscuber(1));
printf("%d\n",iscuber(2));
printf("%d\n",iscuber(-1));
printf("%d\n",iscuber(64));
printf("%d\n",iscuber(0));
printf("%d\n",iscuber(180));
}

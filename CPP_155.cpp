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
vector<int> result{0,0};
int rem;
while(num!=0){
rem=num%10;
if(rem%2==0){
result[0]++;
}
else{
result[1]++;
}
num=num/10;
}
return result;}
int main(){
int num;
scanf("%d",&num);
vector<int> v;
v=even_odd_count(num);
printf("%d %d",v[0],v[1]);
return 0;}
using namespace std;
vector<int> even_odd_count(int num){

/*
Given two positive integers a and b, return the even digits between a
and b, in ascending order.

For example:
generate_integers(2, 8) => {2, 4, 6, 8}
generate_integers(8, 2) => {2, 4, 6, 8}
generate_integers(10, 14) => {}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> generate_integers(int a,int b){
vector<int> c;
int i;
if(a==b){
if(a%2==0){
c.push_back(a);
}
}
else{
if(a<b){
for(i=a;i<=b;i++){
if(i%2==0){
c.push_back(i);
}
}
}
else{
for(i=b;i<=a;i++){
if(i%2==0){
c.push_back(i);
}
}
}
}
return c;
}
int main(){
int a,b,i;
scanf("%d%d",&a,&b);
vector<int> c;
c=generate_integers(a,b);
for(i=0;i<c.size();i++){
printf("%d ",c[i]);
}
return 0;
}

/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
#include<bits/stdc++.h>
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
using namespace std;
int solutions(vector<int> lst){
int sum=0;
for(int i=0;i<lst.size();i++){
if(lst[i]%2==0){
sum+=lst[i];
}
}
return sum;
}
int main(){
vector<int> v;
int n;
scanf("%d",&n);
while(n--){
int x;
scanf("%d",&x);
v.push_back(x);
}
printf("%d",solutions(v));
return 0;
}

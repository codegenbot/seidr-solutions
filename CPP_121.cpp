/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector>
int ans=0;
for(int i=1;i<lst.size();i+=2){
if(lst[i]%2==0)
ans+=lst[i];
}
return ans;
}
int main(){
vector<int> lst={3, 3, 3, 3, 3};
int ans=solutions(lst);
printf("%d",ans);
return 0;
}
using namespace std;
int solutions(vector<int> lst){

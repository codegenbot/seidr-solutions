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
  vector<int> ans;
  if(a<b){
    for(int i=a;i<=b;i++){
      if(i%2==0){
        ans.push_back(i);
      }
    }
  }
  else if(a>b){
    for(int i=b;i<=a;i++){
      if(i%2==0){
        ans.push_back(i);
      }
    }
  }
  else{
    ans.push_back(a);
  }
  return ans;
}
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  vector<int> ans=generate_integers(a,b);
  for(int i=0;i<ans.size();i++){
    printf("%d ",ans[i]);
  }
  printf("\n");
}

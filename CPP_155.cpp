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
  int even,odd,i;
 vector<int> value ;
 if(num<0)
   num=-num;
 if(num==0){
   value[0]=1;
   value[1]=0;
 }
 while(num>0){
   i=num%10;
   if(i%2==0){
     even++;
   }
   else{
     odd++;
   }
   num=num/10;
 }
 value[0]=even;
 value[1]=odd;
 return value;
}
int main(){
  vector<int> v;
  int n,i;
  v=even_odd_count(-12);
  for(i=0;i<v.size();i++){
    printf("%d ",v[i]);
  }
}
using namespace std;
vector<int> even_odd_count(int num){

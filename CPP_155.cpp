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
  vector<int> results;
  int even_count = 0;
  int odd_count = 0;
  int remainder;
  while(num!=0){
    remainder = num % 10;
    if(remainder % 2 == 0){
      even_count++;
    }else{
      odd_count++;
    }
    num = num / 10;
  }
  results.push_back(even_count);
  results.push_back(odd_count);
  
  return results;
}

int main(){
  int num = -12;
  int num2 = 123;
  vector<int> res = even_odd_count(num);
  vector<int> res2 = even_odd_count(num2);
  for(int i = 0; i < res.size(); i++){
    printf("%d ",res[i]);
  }
  printf("\n");
  for(int i = 0; i < res2.size(); i++){
    printf("%d ",res2[i]);
  }
  printf("\n");
  
  return 0;
}
using namespace std;
vector<int> even_odd_count(int num){

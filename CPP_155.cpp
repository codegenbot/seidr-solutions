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
  // your code here
  if(num < 0)
  {
    num = (-1)*num ;
  }
  vector<int> res;
  int countE=0,countO=0;
  int rem =num;
  while(num)
  {
    rem = num%10;
    if(rem %2 == 0){
      countE++;
    }else{
      countO++;
    }
    num = num/10;
  }
  //cout<<countE<<"  ";
  //cout<<countO<<endl;
  res.push_back(countE);
  res.push_back(countO);
  
  return res ;
  
}
int main(){
  vector<int> v = even_odd_count(-12) ;
  cout<<v[0]<<" "<<v[1]<<endl;
  
  return 0 ;
}
using namespace std;
vector<int> even_odd_count(int num){

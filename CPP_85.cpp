/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int add(vector<int> lst){     
       int a,b,c=0; 
       for (int i=1; i<lst.size(); i=i+2)
   {
       for (int j=0; j<lst.size(); j++)
      a=lst[i];
      lst.push_back(a);
  }
          for(int j=0; j<lst.size(); j++)
      {
      if(lst[j]%2==0)
      b=lst[j];
      lst.push_back(b);
    }
    for (int k=0; k<lst.size(); k++)
   c+=lst[i];
   return c;
}
int main(){
     vector<int> list ={4, 2, 6, 7};
     cout<<add(list);
}

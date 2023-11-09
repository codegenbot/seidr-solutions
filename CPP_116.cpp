/*
In this Kata, you have to sort a vector of non-negative integers according to
number of ones in their binary representation in ascending order.
For similar number of ones, sort based on decimal value.

It must be implemented like this:
>>> sort_vector({1, 5, 2, 3, 4}) == {1, 2, 3, 4, 5}
>>> sort_vector({-2, -3, -4, -5, -6}) == {-6, -5, -4, -3, -2}
>>> sort_vector({1, 0, 2, 3, 4}) == {0, 1, 2, 3, 4}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort_array(vector<int> arr){
  vector<int> ones;
  vector<int> zeros;
  for(int i=0;i<arr.size();i++){
    if(arr[i]<0){
      arr[i]*=-1;
    }
    if(arr[i]==0){
      zeros.push_back(arr[i]);
    }
    else{
      ones.push_back(arr[i]);
    }
  }
  sort(ones.begin(),ones.end());
  for(int i=0;i<ones.size();i++){
    int count=0;
    int temp=ones[i];
    while(temp!=0){
      if(temp%2==1){
        count++;
      }
      temp/=2;
    }
    ones[i]=count;
  }
  sort(ones.begin(),ones.end());
  for(int i=0;i<ones.size();i++){
    int temp=ones[i];
    int count=0;
    while(temp!=0){
      count++;
      temp/=2;
    }
    ones[i]=pow(2,count-1);
  }
  for(int i=0;i<ones.size();i++){
    arr[i]=ones[i];
  }
  for(int i=0;i<zeros.size();i++){
    arr[ones.size()+i]=zeros[i];
  }
  return arr;
}

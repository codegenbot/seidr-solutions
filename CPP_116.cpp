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
      arr[i]=-arr[i];
    }
    int count=0;
    int temp=arr[i];
    while(temp>0){
      if(temp%2==1){
        count++;
      }
      temp=temp/2;
    }
    if(count==0){
      zeros.push_back(arr[i]);
    }
    else{
      ones.push_back(arr[i]);
    }
  }
  sort(zeros.begin(),zeros.end());
  sort(ones.begin(),ones.end());
  for(int i=0;i<ones.size();i++){
    int count=0;
    int temp=ones[i];
    while(temp>0){
      if(temp%2==1){
        count++;
      }
      temp=temp/2;
    }
    for(int j=i+1;j<ones.size();j++){
      int count1=0;
      int temp1=ones[j];
      while(temp1>0){
        if(temp1%2==1){
          count1++;
        }
        temp1=temp1/2;
      }
      if(count==count1){
        if(ones[i]>ones[j]){
          int temp=ones[i];
          ones[i]=ones[j];
          ones[j]=temp;
        }
      }
    }
  }
  for(int i=0;i<ones.size();i++){
    zeros.push_back(ones[i]);
  }
  return zeros;
}
int main(){
  vector<int> arr={1, 5, 2, 3, 4};
  vector<int> ans=sort_array(arr);
  for(int i=0;i<ans.size();i++){
    printf("%d ",ans[i]);
  }
  printf("\n");
  return 0;
}

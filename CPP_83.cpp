#include <bits/stdc++.h>
using namespace std; 
int main(){ 
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  int count=0;
  for(int i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      count++;
    }
  }
  for(int i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      if(count==1)
        cout<<a[i]<<" "<<a[i+1]<<endl;
      count--;
    }
  }
}

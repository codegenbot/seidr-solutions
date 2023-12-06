#include<iostream>
using namespace std;
int starts_one_ends(int n){
int count = 0;
for(int i = 1;i <= n;i++){
if((i%10 == 1) || (i/10%10 == 1)){
count++;
}
}
return count;
}
int main(){
int n;
cin>>n;
cout<<starts_one_ends(n)<<endl;
return 0;
}
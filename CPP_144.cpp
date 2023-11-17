/*
Your task is to implement a function that will simplify the expression
x * n. The function returns true if x * n evaluates to a whole number and false
otherwise. Both x and n, are string representation of a fraction, and have the following format,
<numerator>/<denominator> where both numerator and denominator are positive whole numbers.

You can assume that x, and n are valid fractions, and do not have zero as denominator.

simplify("1/5", "5/1") = true
simplify("1/6", "2/1") = false
simplify("7/10", "10/2") = false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool simplify(string x,string n){
int x_num,x_den,n_num,n_den;
sscanf(x.c_str(),"%d/%d",&x_num,&x_den);
sscanf(n.c_str(),"%d/%d",&n_num,&n_den);
if((x_num*n_den)%(x_den*n_num)==0)
return true;
else
return false;
}
int main(){
string x,n;
cout<<"Enter the first fraction "<<endl;
cin>>x;
cout<<"Enter the second fraction "<<endl;
cin>>n;
if(simplify(x,n))
cout<<"The product of the two fractions is a whole number "<<endl;
else
cout<<"The product of the two fractions is not a whole number "<<endl;
return 0;
}

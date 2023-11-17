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
  int a=stoi(x.substr(0,x.find('/')));
  int b=stoi(x.substr(x.find('/')+1));
  int c=stoi(n.substr(0,n.find('/')));
  int d=stoi(n.substr(n.find('/')+1));
  return (a*d)%(b*c)==0;
}
int main(){
  printf(simplify("1/3","3/1")?"true":"false");
  return 0;
}

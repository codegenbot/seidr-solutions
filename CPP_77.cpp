/*
Write a function that takes an integer a and returns true 
if this ingeger is a cube of some integer number.
Note: you may assume the input is always valid.
Examples:
iscube(1) ==> true
iscube(2) ==> false
iscube(-1) ==> true
iscube(64) ==> true
iscube(0) ==> true
iscube(180) ==> false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool iscuber(int a){
  if(a<0){
    a=-a;
  }
  int x=round(pow(a,1.0/3));
  if(x*x*x==a)
    return true;
  else
    return false;
}

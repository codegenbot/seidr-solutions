/*
This function takes two positive numbers x and y and returns the
biggest even integer number that is in the range [x, y] inclusive. If 
there's no such number, then the function should return -1.

For example:
choose_num(12, 15) = 14
choose_num(13, 12) = -1
*/
#include<stdio.h>
using namespace std;
int choose_num(int x,int y){
  if (x%2==0)
  {
    return x;
  }
  else if (y%2==0)
  {
    return y;
  }
  return -1;
}

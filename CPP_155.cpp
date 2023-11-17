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

  int _num = num < 0 ? num * -1 : num;
  vector<int> result(2);

  while (_num > 0){
    if (_num % 10 % 2 == 0)
      result[0]++;
    else
      result[1]++;
    _num /= 10;
  }

  return result;
}

int main(){
  int num = -12;
  vector<int> result = even_odd_count(num);

  printf("%d %d\n", result[0], result[1]);
}
using namespace std;
vector<int> even_odd_count(int num){

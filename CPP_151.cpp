/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
long long sum=0;
/* input
double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  
*/
int i;
  int j;
  for(i = 0; i <= lst.size()-1; ++i){
    if(lst[i] > 0){
      if(i%2 == 0){ //even{
        sum += pow(lst[i],2);
      }
    }
  }
  return sum;
}

int main() {
  /* Generic code to handle input in the main method
   * arg 1 - list of words to parse or list of names
   * arg 2 - length of the list*/
  char *w[] = {"a", "b", "B", "B", "c"};
  vector<string> words(w, w + sizeof(w) / sizeof(char*));
  int result = score(words);
  
  return 0
}

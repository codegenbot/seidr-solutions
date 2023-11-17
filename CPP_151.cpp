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
  for(int i=0;i<lst.size();i++)
  {
    if(lst[i]>=0 && (int)lst[i]==lst[i])
    {
      if((int)lst[i]%2!=0)
    sum+=(int)pow(lst[i],2);
    }
  }
  return sum;
}


#include <iostream>
using namespace std;

void assertEqual(float expected, float observed, const char * message =""){
  if (expected == observed)
    cout << "PASSED: " << message << endl;;
  else
    cout << "   FAILED: " << message << endl
         << "     Expected: " << expected << endl
         << "     Observed: " << observed << endl;
}

void negative_case(){
  float expected = 0;
  vector<float> lst = { -1, -2.4, 0 };
  float observed = double_the_difference(lst);
  //%%%truncate
  assertEqual(expected, observed);
}
void positive_odd_case() {
  float expected = 370076;
  vector<float> lst = {-1,-2.3,2,0,9,8,7,4,1,-9};
  float observed = double_the_difference(lst);
  //%%%truncate
  assertEqual(expected, observed);
}

void empty_case(){
  float expected = 0;
  vector<float> lst = { };
  float observed = double_the_difference(lst);
  //%%%truncate
  assertEqual(expected, observed);
}

/*
Comment 	Add 2,3,0, to the lst. Add 4,21,4171 to odd_sum.  Double the_difference = 8342
*/

int main(){
  negative_case();
  positive_odd_case();
  empty_case();
  /*cout << "ran all tests" << endl;*/
  //%%%tucescut
  vector<float> lst = {2,3,0,-1,-2.4,2,0,9,8,7,4,1,-9};
  assert (double_the_difference(lst) == odd_sum );
  cout << endl << endl << "Paste this into the pyTester" << endl << endl;
  cout << odd_sum << " +- 0.000001" << endl << "[";
  for (const auto &i: lst)
    cout << i << ",";
  cout << "]";
}

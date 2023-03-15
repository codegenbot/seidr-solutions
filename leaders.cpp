#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
int main() {
  int numOfInts = 0;// '0'
  cin >> numOfInts; //'0'
  stack<int> allInts;
  stack<int> leaders;
  int max = 0;
  while(numOfInts-- > 0){
    int input_num;
    cin >> input_num;
    allInts.push(input_num);
  }
  while(!allInts.empty()){
    int curr_num = allInts.top();
    allInts.pop();
    if(curr_num >= max) {
    	leaders.push(curr_num);
    	max = curr_num;
    }
  }
  int leader_size = leaders.size();
  cout << leader_size << endl;
  if(leader_size > 0){
    for(int i = 0; i < leader_size - 1; i++){
      cout << leaders.top() << " ";
      leaders.pop();
    }
    cout << leaders.top() << endl;
    leaders.pop(); 
  }else{
    cout << endl;
  }
}

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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
int isSpare(const string& s) { return s[1] == '/'; }
int isStrike(const string& s) { return s[0] == 'X'; }
int isEnd(const string& s) {
  return isSpare(s) || isStrike(s);
}
int getNum(const string& s) {
  const char* cs = s.c_str();
  switch(cs[0]) {
    case 'X':
      return 10;
    case '/':
      return 10 - (cs[-1] - '0');
    default:
      return cs[0] - '0';
  }
}
const int INVALIAD_RETURN = -1;
int getScore(const vector<string>& input) {
  int numFrames = input.size();
  if(numFrames > 10) return INVALIAD_RETURN;
  string next = "--";
  int sum = 0;
  for(int i = 0; i < numFrames; ++i) {
    sum += getNum(input[i]);
    if(!isEnd(input[i]) && !isEnd(next)) {
      sum += getNum(next);
      next = "--";
    }
    if(next != "--") {
      sum += getNum(next);
      next = "--";
    }
    if(isEnd(input[i])) {
      int n = i + 2;
      next = n < numFrames ? input[n] : "--";
    }
  }
  return sum;
}

int main() {
  
  return 0;
}

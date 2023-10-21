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

int bowling_score(const string& s) {
  int res = 0;
  int i = 0;
  int j = 0;
  for (j = 0; j < 10; ++j) {
    if (s[i] == 'X') {
      res += 10;
      ++i;
      if (s[i] == 'X') {
        res += 10;
        ++i;
        if (s[i] == 'X') {
          res += 10;
          ++i;
        } else {
          res += s[i] - '0';
          ++i;
        }
      } else if (s[i] == '/') {
        res += 10;
        ++i;
      } else {
        res += s[i] - '0';
        ++i;
      }
    } else if (s[i] == '/') {
      res += 10;
      ++i;
      if (s[i] == 'X') {
        res += 10;
        ++i;
      } else {
        res += s[i] - '0';
        ++i;
      }
    } else {
      res += s[i] - '0';
      ++i;
      if (s[i] == '-') {
        ++i;
      } else {
        res += s[i] - '0';
        ++i;
      }
    }
  }
  return res;
}

int main() {
  string s;
  while (cin >> s) {
    cout << bowling_score(s) << endl;
  }
  return 0;
}

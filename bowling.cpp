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

int score(string s) {
  int score = 0;
  int frame = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'X') {
      score += 10;
      score += (s[i+2] == 'X' ? 10 : s[i+2] - '0');
      score += (s[i+3] == 'X' ? 10 : s[i+3] - '0');
      frame++;
    } else if (s[i] == '/') {
      score += 10;
      score += (s[i+1] == 'X' ? 10 : s[i+1] - '0');
      frame++;
    } else if (s[i] == '-') {
      frame++;
    } else {
      score += s[i] - '0';
      if (frame % 2 == 0) {
        frame++;
      }
    }
    if (frame == 10)
      break;
  }
  return score;
}
int main() {
  cout << score("XXXXXXXXXXXX") << endl;
  cout << score("5/5/5/5/5/5/5/5/5/5/5") << endl;
  cout << score("7115XXX548/279-X53") << endl;
  cout << score("532/4362X179-41447/5") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout << score("-4/X4/X-3/23") << endl;
  cout

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

int getScore(const string &input) {
  int score = 0;
  for(int i = 0; i < input.size(); i++) {
    if(input[i] <= '9' && input[i] >= '0') {
      score += input[i] - '0';
    } else if(input[i] == 'X') {
      score += 10;
      int first = i + 1, second = i + 2, third = i + 3;
      if(first < input.size()) {
        if(input[first] == 'X') {
          score += 10;
        } else if(input[first] == '/') {
          score += 10;
        } else {
          score += input[first] - '0';
        }
      }
      if(second < input.size()) {
        if(input[second] == 'X') {
          score += 10;
        } else if(input[second] == '/') {
          score += 10;
          if(input[third] == 'X') {
            score += 10;
          } else {
            score += input[third] - '0';
          }
        } else {
          score += input[second] - '0';
        }
      }
      if(input[i + 3] == 'X') {
        score += 10;
      } else if(input[i + 3] == '/') {
        score += 10;
        if(input[i + 4] == 'X') {
          score += 10;
        } else {
          score += input[i + 4] - '0';
        }
        i = i + 1;
      }
    } else if(input[i] == '/') {
      score += 10;
      if(input[i + 2] == 'X') {
        score += 10;
        i = i + 1;
      }
    } else if(input[i] == '-') {
      i = i + 1;
      score += input[i + 1] - '0';
    }
  }
  return score;
}

int main() {
  string input;
  cin >> input;
  cout << getScore(input) << endl;
  return 0;
}

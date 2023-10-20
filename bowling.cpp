#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <queue>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#define INF 1000000000
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(cont, it) for(typeof((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<long long> vli;
typedef vector<ii> vii;

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
  for (int i = 0; i < input.size(); i++) {
    if (input[i] <= '9' && input[i] >= '0') {
      score += input[i] - '0';
    } else if (input[i] == 'X') {
      score += 10;
      if (input[i + 1] == 'X') {
        score += 10;
        if (input[i + 2] == 'X') {
          score += 10;
        } else {
          score += input[i + 2] - '0';
        }
      } else {
        score += input[i + 1] - '0';
        if(input[i + 2] == '/') {
          score += 10;
        } else {
          score += input[i + 2] - '0';
        }
      }
    } else if (input[i] == '/') {  // we assume always get a valid string, no need to check if at end
      score += 10;
      score += input[i + 1] - '0';
    }
  }
  return score;
}

int main() {
  string input;
  cin >> input;
  printf("%d\n", getScore(input));
}

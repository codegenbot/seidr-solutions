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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
  string s;
  while (getline(cin, s)) {
    string ans = "";
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '-') {
        flag = true;
      } else if (s[i] == ' ') {
        ans += ' ';
      } else if (flag) {
        ans += (s[i] - 'a' + 'A');
        flag = false;
      } else {
        ans += s[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}

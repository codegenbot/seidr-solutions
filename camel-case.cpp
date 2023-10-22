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
  int n;
  cin >> n;
  string str;
  map<string, int> dic;
  for (int i  = 0; i < n; ++i) {
    cin >> str;
    dic[str] = 0;
  }
  cin >> n;
  string s;
  map<string, int> dic1;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    int pos = s.find('@');
    if (pos != string::npos) {
      string s1 = s.substr(pos + 1);
      if ( dic.find(s1) != dic.end()) {
        dic1[s] = 1;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    cin >> s;
    if (dic1.find(s) != dic1.end()) {
      cout << s << endl;
    }
  }
  return 0;

}

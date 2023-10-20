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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCase exampleTestString".
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
input:
Make sure that  -> 
output:
Make sure that ->
*/
int main() {
string s;
getline(cin, s);
string res = "";
bool space = false;
for (int i = 0; i < s.size(); i++) {
  if (s[i] != ' ') {
    space = true;
  }
  if (space) {
    if (s[i] == ' ') {
      res += " ";
    } else if (s[i] == '-') {
      res += " ";
    } else {
      res += s[i];
    }
  }
}
vector<string> v;
string temp = "";
for (int i = 0; i < res.size(); i++) {
  if (res[i] != ' ') {
    temp += res[i];
  } else {
    v.push_back(temp);
    temp = "";
  }
}
v.push_back(temp);
string ans = "";
for (int i = 0; i < v.size(); i++) {
  string t = v[i];
  if (i == 0) {
    ans += t;
  } else {
    ans += toupper(t[0]);
    for (int j = 1; j < t.size(); j++) {
      ans += t[j];
    }
  }
}
cout << ans << endl;
return 0;
}

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
  string first = "this is a test";
  string second = "thisisatest";
  string third = "is";
  string fourth = "this is longer than test";
  string fifth = "this is longer than longer test";
  const char* ch = "bob-job";
  char s[32];
  strcpy(s, ch);
  cout << s << endl;
  vector<string> res;
  for(int i = 0; i < 26; i++) {
    res.push_back(string(1, (char)('a' + i)));
  }
  cout << res.size() << endl;
  int k = 0;
  while (res.size() > 0) {
    int i = 0;
    for(; i < res.size(); i++) {
      int j = 0;
      for(; j < first.size(); j++) {
	if (res[i][k] != first[j]) {
	  res.erase(res.begin() + i);
	  i--;
	  break;
	}
      }
      if (j == res[i].size() - 1) {
	res[i] += res[i][k];
      }
    }
    k++;
  }
  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }
  string ans = processString(first, second);
  cout << ans << endl;
  return 0;
}
string processString(string p, string s) {
  vector<int> index;
  index.push_back(0);
  while (true) {
    index.push_back(p.find(s, index[index.size() - 1]));
    if (index[index.size() - 1] == -1) break;
  }
  index.pop_back();
  string ans = "";
}

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

string camelCase(string str) {
  string result;
  string word;
  bool isFirstWord = true;
  for (char c : str) {
    if (c != '-') {
      word += c;
    } else {
      if (isFirstWord) {
        result += word;
        isFirstWord = false;
      } else {
        result += word[0] + toupper(word[1]);
      }
      word.clear();
    }
  }
  if (isFirstWord) {
    result += word;
  } else {
    result += word[0] + toupper(word[1]);
  }
  return result;
}

int main() {

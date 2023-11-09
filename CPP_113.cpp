/*
Given a vector of strings, where each string consists of only digits, return a vector.
Each element i of the output should be 'the number of odd elements in the
string i of the input." where all the i's should be replaced by the number
of odd digits in the i'th string of the input.

>>> odd_count({"1234567"})
{'the number of odd elements 4n the str4ng 4 of the 4nput."}
>>> odd_count({"3","11111111"})
{'the number of odd elements 1n the str1ng 1 of the 1nput.",
 'the number of odd elements 8n the str8ng 8 of the 8nput."}
*/
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
using namespace std;
vector<string> odd_count(vector<string> lst){
  map<char, int> count;
  for (int i = 0; i < lst.size(); i++) {
    for (int j = 0; j < lst[i].size(); j++) {
      count[lst[i][j]]++;
    }
  }
  vector<string> result;
  for (int i = 0; i < lst.size(); i++) {
    string temp = "the number of odd elements ";
    for (int j = 0; j < lst[i].size(); j++) {
      if (count[lst[i][j]] % 2 == 1) {
        temp += lst[i][j];
      }
    }
    temp += "n the str";
    temp += lst[i];
    temp += "ng ";
    temp += lst[i];
    temp += " of the ";
    temp += lst[i];
    temp += "nput.";
    result.push_back(temp);
  }
  return result;
}

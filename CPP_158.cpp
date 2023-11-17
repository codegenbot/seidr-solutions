/*
Write a function that accepts a vector of strings.
The vector contains different words. Return the word with maximum number
of unique characters. If multiple strings have maximum number of unique
characters, return the one which comes first in lexicographical order.

find_max({"name", "of", 'string"}) == 'string"
find_max({"name", "enam", "game"}) == "enam"
find_max({"aaaaaaa", "bb" ,"cc"}) == "aaaaaaa"
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string find_max(vector<string> words){
  if(words.empty()) return "";
  int max_unique = 0;
  string result;
  for(auto& s : words){
    int unique_chars = 0;
    vector<bool> seen(26, false);
    for(auto& c : s){
      if(!seen[c - 'a']){
        unique_chars++;
        seen[c - 'a'] = true;
      }
    }
    if(unique_chars > max_unique){
      max_unique = unique_chars;
      result = s;
    }
    else if(unique_chars == max_unique){
      result = min(result, s);
    }
  }
  return result;
}

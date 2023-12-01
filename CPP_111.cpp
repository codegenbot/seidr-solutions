#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char,int> histogram(string test){
  map<char,int> result;
  string word;
  for(char c : test){
    if(c != ' '){
      word += c;
    }else{
      result[word]++;
      word = "";
    }
  }
  if(word != ""){
    result[word]++;
  }
  return result;
}

bool issame(map<char,int> a, map<char,int> b){
  return a == b;
}

int main(){
  assert (issame(histogram("a") , {{'a', 1}}));
  assert (issame(histogram("hello world") , {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}}));

  return 0;
}
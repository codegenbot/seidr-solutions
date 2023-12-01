#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
  if (a.size() != b.size()) {
    return false;
  }

  for (auto it = a.begin(); it != a.end(); it++) {
    char key = it->first;
    int value = it->second;

    if (b.find(key) == b.end() || b[key] != value) {
      return false;
    }
  }

  return true;
}

map<char, int> histogram(string test) {
  map<char, int> result;
  string letter;
  int count = 0;

  for (int i = 0; i < test.length(); i++) {
    if (test[i] != ' ') {
      letter += test[i];
    } else {
      if (!letter.empty()) {
        result[letter[0]]++;
        if (result[letter[0]] > count) {
          count = result[letter[0]];
        }
        letter = "";
      }
    }
  }

  if (!letter.empty()) {
    result[letter[0]]++;
    if (result[letter[0]] > count) {
      count = result[letter[0]];
    }
  }

  map<char, int> output;
  for (auto it = result.begin(); it != result.end(); it++) {
    if (it->second == count) {
      output[it->first] = it->second;
    }
  }

  return output;
}

int main() {
  map<char, int> input1 = histogram("hello world"); // Example input
  map<char, int> expected1 = {{'l', 3}, {'o', 2}};
  assert(issame(input1, expected1));

  map<char, int> input2 = histogram("testing"); // Example input
  map<char, int> expected2 = {{'t', 2}, {'e', 1}, {'s', 1}, {'i', 1}, {'n', 1}, {'g', 1}};
  assert(issame(input2, expected2));

  // Add more function calls and assertions to validate the code

  return 0;
}
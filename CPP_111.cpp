#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<std::string, int> histogram(std::string test) {
  std::map<std::string, int> result;
  if (test.empty()) {
    return result;
  }
  char letter = '\0';
  for (char c : test) {
    if (c == ' ') {
      result[std::string(1, letter)]++;
      letter = '\0';
    } else {
      letter = c;
    }
  }
  result[std::string(1, letter)]++;
  return result;
}

bool issame(std::map<std::string, int> a, std::map<std::string, int> b) {
  return a == b;
}

int main() {
  assert(issame(histogram("hello world"), {{"hello", 1}, {"world", 1}}));

  std::cout << "All tests passed!" << std::endl;

  return 0;
}
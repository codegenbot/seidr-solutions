#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets) {
  int count = 0;
  for (int i = 0; i < brackets.length(); i++) {
    if (brackets[i] == '<') {
      count++;
    } else if (brackets[i] == '>') {
      count--;
    }
    if (count < 0) {
      return false;
    }
  }
  return count == 0;
}

int main() {
  std::string input;
  std::cin >> input;
  
  std::cout << correct_bracketing(input) << std::endl;
  
  return 0;
}
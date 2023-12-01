#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s) {
  std::string encrypted = "";
  for (int i = 0; i < s.length(); i++) {
    if (isalpha(s[i])) {
      char c = s[i] + (2 * 2);
      if (c > 'z') {
        c = c - 'z' + 'a' - 1;
      }
      encrypted += c;
    }
    else {
      encrypted += s[i];
    }
  }
  return encrypted;
}

int main() {
  assert(encrypt("a") == "e");
  // Additional test cases
  assert(encrypt("xyz") == "bcd");
  assert(encrypt("Hello World!") == "Lipps Asvph!");
  std::cout << "All test cases passed!" << std::endl;

  return 0;
}
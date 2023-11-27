#include <iostream>
#include <string>

using namespace std;

bool correct_bracketing(string brackets) {
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
    string brackets;
    cin >> brackets;
    cout << correct_bracketing(brackets);
    return 0;
}
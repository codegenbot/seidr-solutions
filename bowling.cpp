#include <iostream>
#include <string>
using namespace std;
int getScore(string input) {
  int score = 0;
  for (int i = 0; i < input.length(); i++) {
    char c = input[i];
    if (c == '/') {
      score += 10 - stoi(input.substr(i + 1, 2));
      break;
    } else if (c == 'X') {
      score += 10;
    } else {
      score += stoi(c);
    }
  }
  return score;
}
int main() {
  string input = "";
  getline(cin, input);
  cout << getScore(input) << endl;
  return 0;
}
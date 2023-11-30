#include <iostream>
#include <string>

int calculateScore(const std::string& rolls) {
  int score = 0;
  int frame = 1;
  int rollIndex = 0;

  for (char roll : rolls) {
    if (roll == 'X') {
      score += 10;
      if (frame < 10) {
        score += (rolls[rollIndex + 1] == 'X') ? 10 + ((rolls[rollIndex + 2] == 'X') ? 10 : (rolls[rollIndex + 2] - '0')) : (rolls[rollIndex + 1] == '/') ? 10 : (rolls[rollIndex + 1] - '0');
        if (rolls[rollIndex + 2] == 'X' && frame < 9) {
          score += (rolls[rollIndex + 3] == 'X') ? 10 : (rolls[rollIndex + 3] - '0');
        }
      }
      frame++;
    }
    else if (roll == '/') {
      score += 10 - (rolls[rollIndex - 1] - '0');
      score += (rolls[rollIndex + 1] == 'X') ? 10 : (rolls[rollIndex + 1] - '0');
      if (rolls[rollIndex + 1] == 'X' && frame < 10) {
        score += (rolls[rollIndex + 2] == 'X') ? 10 : (rolls[rollIndex + 2] - '0');
      }
      frame++;
    }
    else if (roll >= '1' && roll <= '9') {
      score += (roll - '0');
      frame++;
    }

    if (frame >= 11) {
      break;
    }
    rollIndex++;
  }
  return score;
}

int main() {
  std::string rolls;
  std::cin >> rolls;
  int score = calculateScore(rolls);
  std::cout << score << std::endl;
  return 0;
}
Sure, here's my solution:
```cpp
#include <string>
#include <vector>

int calculate_score(const string& bowls) {
  int score = 0;
  for (int i = 0; i < bowls.size(); i++) {
    if (bowls[i] == 'X') {
      score += 10;
    } else if (bowls[i] == '/') {
      score += 5;
    } else if (bowls[i] >= '0' && bowls[i] <= '9') {
      score += bowls[i] - '0';
    }
  }
  return score;
}
```
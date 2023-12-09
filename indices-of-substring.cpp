```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
  std::vector<int> indices(text.length() - target.length() + 1);
  int m = target.length();

  for (int i = 0; i <= text.length() - m; i++) {
    int j;
    for (j = 0; j < m; j++) {
      if (text[i + j] != target[j]) {
        break;
      }
    }
    if (j == m) {
      indices[i] = i;
    }
  }

  return indices;
}

int main() {
  std::string text, target;
  std::cin >> text >> target;

  std::vector<int> result = indicesOfSubstring(text, target);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }

  return 0;
}
```
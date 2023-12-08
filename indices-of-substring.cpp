```cpp
#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
  std::vector<int> indices{};
  int n = text.length();
  int m = target.length();

  for (int i = 0; i <= n - m; i++) {
    int j;
    for (j = 0; j < m; j++) {
      if (text[i + j] != target[j]) {
        break;
      }
    }
    if (j == m) {
      indices.push_back(i);
    }
  }

  return indices;
}

int main() {
  std::string text, target;
  getline(std::cin, text);
  getline(std::cin, target);

  std::vector<int> result = indicesOfSubstring(text, target);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }

  return 0;
}
```

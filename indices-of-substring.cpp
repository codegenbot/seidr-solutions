```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
  std::vector<int> indices;
  size_t n = text.length();
  size_t m = target.length();

  for (size_t i = 0; i <= n - m; i++) {
    size_t j;
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
  std::cin >> text >> target;

  std::vector<int> result = indicesOfSubstring(text, target);

  for (const auto& index : result) {
    std::cout << index << " ";
  }

  return 0;
}
```
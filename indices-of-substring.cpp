```cpp
#include <iostream>
#include <vector>

std::vector<size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
  std::vector<size_t> indices{};
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
  std::cin >> text;
  std::cin >> target;

  std::vector<size_t> result = indicesOfSubstring(text, target);

  for (const auto& index : result) {
    std::cout << index << " ";
  }

  return 0;
}
```
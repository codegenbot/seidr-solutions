```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
  std::vector<int> indices(text.length());

  for (int i = 0; i <= text.length() - target.length(); i++) {
    int j;
    for (j = 0; j < target.length(); j++) {
      if (text[i + j] != target[j]) {
        break;
      }
    }
    if (j == target.length()) {
      indices.push_back(i);
    }
  }

  return indices;
}

int main() {
  std::string text, target;
  std::cin >> text;
  std::cin >> target;

  std::vector<int> result = indicesOfSubstring(text, target);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }

  return 0;
}
```
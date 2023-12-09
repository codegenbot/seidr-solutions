#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
  std::vector<int> indices;
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
      std::copy(i, i + m, std::back_inserter(indices));
    }
  }

  return indices;
}

int main() {
  std::string text, target;
  std::cin >> text;
  std::cin >> target;

  std::vector<int> result = indicesOfSubstring(text, target);

  for (int i : result) {
    std::cout << i << " ";
  }

  return 0;
}
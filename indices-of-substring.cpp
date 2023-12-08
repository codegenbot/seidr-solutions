```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
  vector<int> indices;
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
  string text, target;
  cin >> text;
  cin >> target;

  vector<int> result = indicesOfSubstring(text, target);

  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}
```
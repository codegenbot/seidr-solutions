#include <vector>
#include <algorithm>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
  std::vector<std::vector<int>> result;
  for (int i = 0; i < lst.size(); i++) {
    for (int j = 0; j < lst[i].size(); j++) {
      if (lst[i][j] == x) {
        result.push_back({i, j});
      }
    }
  }
  std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
    if (a[0] == b[0]) {
      return a[1] > b[1];
    }
    return a[0] < b[0];
  });
  return result;
}

bool is_same(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
  if (a.size() != b.size()) {
    return false;
  }
  for (int i = 0; i < a.size(); i++) {
    if (a[i].size() != b[i].size()) {
      return false;
    }
    for (int j = 0; j < a[i].size(); j++) {
      if (a[i][j] != b[i][j]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
}
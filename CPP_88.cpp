#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
  return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
  if (array.empty()) {
    return {};
  }
  int sum = array[0] + array[array.size() - 1];
  if (sum % 2 == 0) {
    std::sort(array.begin(), array.end(), std::greater<int>());
  } else {
    std::sort(array.begin(), array.end());
  }
  return array;
}
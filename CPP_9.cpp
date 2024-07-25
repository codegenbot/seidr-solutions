#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b); // Forward declaration

std::vector<int> rolling_max(std::vector<int> numbers) {
  std::vector<int> result;
  int max_num = numbers[0];
  result.push_back(max_num);
  for (size_t i = 1; i < numbers.size(); ++i) {
    max_num = std::max(max_num, numbers[i]);
    result.push_back(max_num);
  }
  return result;
}
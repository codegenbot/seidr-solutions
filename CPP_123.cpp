#include <vector>
#include <cassert>

bool are_same(const std::vector<int>& a, const std::vector<int>& b) {
  return a == b;
}

std::vector<int> get_odd_collatz(int n) {
  std::vector<int> result;
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
    if (n % 2 == 1) {
      result.push_back(n);
    }
  }
  return result;
}

int main() {
  std::vector<int> test_case_1 = {1, 4, 2, 1};
  std::vector<int> test_case_2 = {1, 2, 1};

  assert(are_same(get_odd_collatz(1), test_case_1));
  assert(are_same(get_odd_collatz(2), test_case_2));

  return 0;
}
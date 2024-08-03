#include <vector>

bool issame(vector<int> a, vector<int> b) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}

vector<int> get_odd_collatz(int n) {
  vector<int> result;
  while (n != 1) {
    result.push_back(n);
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  }
  result.push_back(1);
  sort(result.begin(), result.end());
  vector<int> odd_result;
  for (int num : result) {
    if (num % 2 == 1) {
      odd_result.push_back(num);
    }
  }
  return odd_result;
}

int main() {
  // Example usage
  int number = 27;
  vector<int> collatz_odd = get_odd_collatz(number);
  return 0;
}
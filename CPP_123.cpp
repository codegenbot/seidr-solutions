#include <vector>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
  return a == b;
}

vector<int> get_odd_collatz(int n) {
  vector<int> collatz_seq;
  collatz_seq.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n) + 1;
    }
    collatz_seq.push_back(n);
  }
  vector<int> odd_collatz_seq;
  for (int i = 0; i < collatz_seq.size(); i++) {
    if (collatz_seq[i] % 2 != 0) {
      odd_collatz_seq.push_back(collatz_seq[i]);
    }
  }
  return odd_collatz_seq;
}

int main() {
  vector<int> expected = {1};
  const vector<int>& result = get_odd_collatz(1);
  if (issame(result, expected)) {
    cout << "Output is correct" << endl;
  } else {
    cout << "Output is incorrect" << endl;
  }
}
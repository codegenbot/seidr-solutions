/*
Implement a function that takes an non-negative integer and returns a vector of the first n
integers that are prime numbers and less than n.
for example:
count_up_to(5) => {2,3}
count_up_to(11) => {2,3,5,7}
count_up_to(0) => {}
count_up_to(20) => {2,3,5,7,11,13,17,19}
count_up_to(1) => {}
count_up_to(18) => {2,3,5,7,11,13,17}
*/
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> count_up_to(int n) {
  vector<int> result;
  vector<bool> is_prime(n + 1, true);
  for (int i = 2; i <= n; i++) {
    if (is_prime[i] == true) {
      for (int j = 2; j * i <= n; j++) {
        is_prime[j * i] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (is_prime[i] == true) {
      result.push_back(i);
    }
  }
  return result;
}

int main() {
  for (auto i : count_up_to(20)) {
    printf("%d ", i);
  }
  printf("\n");
  for (auto i : count_up_to(1)) {
    printf("%d ", i);
  }
  printf("\n");
  for (auto i : count_up_to(0)) {
    printf("%d ", i);
  }
  printf("\n");
  for (auto i : count_up_to(5)) {
    printf("%d ", i);
  }
  printf("\n");
  for (auto i : count_up_to(11)) {
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}

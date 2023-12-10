Here's one way to solve the problem using a hash table:
```
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  vector<int> nums = {5, 7};
  int target = 12;

  unordered_map<int, bool> seen;
  for (auto i : nums) {
    if (seen.find(target - i) != seen.end()) {
      cout << i << " " << target - i << endl;
      break;
    }
    seen[i] = true;
  }

  return 0;
}
```
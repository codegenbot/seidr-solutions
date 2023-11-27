#include <vector>

bool issame(vector<int> a, vector<int> b) {
  if (a.size() != b.size()) {
    return false;
  }
  
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  
  return true;
}

vector<int> make_a_pile(int n) {
  vector<int> stones;
  int level = n;
  int stonesInLevel = n;
  stones.push_back(stonesInLevel);
  
  while (level > 1) {
    if (level % 2 == 0) {
      stonesInLevel += 2;
    } else {
      stonesInLevel += 1;
    }
    stones.push_back(stonesInLevel);
    level--;
  }
  
  return stones;
}

int main() {
  assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
  
  return 0;
}
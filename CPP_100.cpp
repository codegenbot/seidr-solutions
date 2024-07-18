#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
  if (a.size() != b.size()) {
    return false;
  }
  
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  
  return true;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    std::vector<int> pile = make_a_pile(5);
    
    // Testing the make_a_pile function
    for (int stone : pile) {
        std::cout << stone << " ";
    }
    
    std::vector<int> expected = {5, 6, 8, 10, 12, 14};
    assert(issame(pile, expected));

    return 0;
}
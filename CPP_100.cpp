#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
  // implementation goes here
}

std::vector<int> make_a_pile(int n){
    std::vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    for(int i=0; i<n-1; i++){
        if(stones % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}

int main() {
  assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));

  return 0;
}
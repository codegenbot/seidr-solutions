#include <cassert>
#include <initializer_list>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> make_a_pile(int n);

bool issame(std::vector<int> a, std::vector<int> b){
   return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> levels;
    int stones = n;
    
    for (int i = 0; i < n; i++) {
        levels.push_back(stones);
        
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    
    return levels;
}

int main() {
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
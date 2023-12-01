#include <cassert>
#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> levels;
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
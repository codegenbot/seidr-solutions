#include <vector> 
vector<int> make_a_pile(int n);
bool issame(vector<int> a, vector<int> b);
int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
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
    // Implementation of issame function
}
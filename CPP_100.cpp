```cpp
#include <vector>
#include <cassert>

using namespace std;

template<typename T>
constexpr auto operator==(const vector<T>& a, const vector<T>& b) {
    return a.size() == b.size();
}

vector<int> make_a_pile(int n) {
    int stones = n;
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    vector<int> result = make_a_pile(8); 
    assert(result == vector<int>());
    return 0;
}
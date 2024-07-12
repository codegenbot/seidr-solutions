#include <vector>
#include <initializer_list>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, initializer_list<int> il) {
    return a == vector<int>(il);
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
    assert(issame({0}, result));
    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
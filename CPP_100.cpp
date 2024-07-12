```cpp
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
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
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> result = make_a_pile(n); 
    assert(same({0}, result));
    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
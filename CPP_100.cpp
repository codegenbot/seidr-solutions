#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame = [](vector<int> a, vector<int> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
};

vector<int> make_a_pile(int n);

int main() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for (int stone : result) {
        cout << stone << " ";
    }
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
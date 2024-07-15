#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << ' ';
    }
    return 0;
}
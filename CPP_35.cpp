#include <algorithm>
#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

int max_value = -1;
int min_value = INT_MAX;

vector<pair<int, int>> p;

void solve() {
    for (int i = 0; i < 6; ++i) {
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
    }

    auto max_pair = *max_element(p.begin(), p.end(),
                                  [](const auto& a, const auto& b) {
                                      return a.second < b.second;
                                  });

    min_value = *min_element(p.begin(), p.end())->first;

    cout << "Maximum value: " << get<1>(max_pair) << endl;
    cout << "Minimum value: " << min_value << endl;
}

int main() {
    solve();
    return 0;
}
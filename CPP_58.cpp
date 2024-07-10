#include <vector>
#include <set>
#include <algorithm>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin(),
                                                  [](const auto& v1, const auto& v2) {
                                                      return std::any_of(v1.begin(), v1.end(), [v2](int x) { return std::find(v2.begin(), v2.end(), x) != v2.end(); });
                                                  });
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::vector<int> result;
    for (int i : s1) {
        if (s2.find(i) != s2.end()) {
            result.push_back(i);
        }
    }

    return result;

}

int main() {
    int n, m;
    cin >> n >> m;

    std::vector<std::vector<int>> l1(n), l2(m);

    for (int i = 0; i < n; i++) {
        l1[i].resize(4);
        for (int j = 0; j < 4; j++) {
            cin >> l1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        l2[i].resize(4);
        for (int j = 0; j < 4; j++) {
            cin >> l2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        std::vector<int> result = common({l1[i][0], l1[i][1], l1[i][2], l1[i][3]}, {l2[0][0], l2[0][1], l2[0][2], l2[0][3]});
        for (int j : result) {
            cout << j;
            if (j < result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
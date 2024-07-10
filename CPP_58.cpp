```cpp
#include <vector>
#include <set>
#include <initializer_list>

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin(),
                                                  [](const auto& v1, const auto& v2) {
                                                      return issame(v1, v2);
                                                  });
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result(s1.begin(), s1.end());  // start the output with s1
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                          back_inserter(result));
    
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> l1(n), l2(m);

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

    vector<int> result = common({l1[0][0], l1[0][1], l1[0][2], l1[0][3]}, {l2[0][0], l2[0][1], l2[0][2], l2[0][3]});

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}
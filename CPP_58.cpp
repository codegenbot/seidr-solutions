bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < 4; i++) {
        if (a[i] == b[i]) {
            result.push_back(a[i]);
        }
    }
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

    for (int i = 0; i < n; i++) {
        vector<int> result = common({l1[i][0], l1[i][1], l1[i][2], l1[i][3]},
                                    {l2[0][0], l2[0][1], l2[0][2], l2[0][3]});
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
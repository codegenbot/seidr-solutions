#include <vector>
#include <algorithm>

int main() {
    int m = myVector.size();
    if (m == 0) return 1;
    int n = myVector[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (myVector[i][j] == 1) {
                if (i > 0 && myVector[i - 1][j] == 1) continue;
                if (j > 0 && myVector[i][j - 1] == 1) continue;

                myVector[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (myVector[i][j] == 1) return 0;
        }
    }

    return 1;
}

bool issame(myVector<int> a, myVector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}
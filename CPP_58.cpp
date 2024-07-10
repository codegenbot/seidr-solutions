#include <vector>
#include <iostream>
using namespace std;

vector<int> common(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        int val1 = a[(i+3)%4];
        int val2 = a[(i+1)%4];
        for(int j=0; j<4; j++){
            if(val1 == b[j] && val2==b[(j+1)%4]){
                result.push_back(a[i]);
                break;
            }
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
        vector<int> temp(l1[i]);
        vector<int> result = common(temp, {l2[0][0], l2[0][1], l2[0][2], l2[0][3]});
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
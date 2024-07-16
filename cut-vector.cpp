#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int index = 0;
    
    for(int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[i-1]);
        if(diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }

    return {vector<int>(v.begin(), v.begin() + index), vector<int>(v.begin() + index, v.end())};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "First subvector: ";
    for(int x : result.first) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Second subvector: ";
    for(int y : result.second) {
        cout << y << " ";
    }
    cout << endl;

    return 0;
}
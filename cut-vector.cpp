#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if(n <= 1)
        return {{v[0]}};

    for(int i = 0; i < n; i++) {
        vector<int> left, right;
        for(int j = 0; j <= i; j++)
            left.push_back(v[j]);
        for(int j = i + 1; j < n; j++)
            right.push_back(v[j]);

        int minDiff = abs(left.back() - right.front());
        bool isMinDiff = true;

        for(int k = 0; k < i; k++) {
            if(abs(left[k] - left.back()) > minDiff) {
                isMinDiff = false;
                break;
            }
        }

        if(isMinDiff) {
            res[0] = left;
            res[1] = right;
            return res;
        }
    }

    return {{v}};
}

int main() {
    vector<int> v = {1, 3, 5};
    auto result = cutVector(v);
    for(auto &sub : result) {
        for(int x : sub)
            cout << x << " ";
        cout << endl;
    }
}
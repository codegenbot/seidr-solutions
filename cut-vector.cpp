```c++
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> res = cutVector(v);
    for (auto& x : res) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    if(n == 1)
        return {{v[0]}};

    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            int left_sum = 0, right_sum = 0;
            for(int j = 0; j <= i; j++)
                left_sum += v[j];
            for(int j = i; j < n; j++)
                right_sum += v[j];

            if(left_sum == right_sum) {
                res[0].clear();
                for(int j = 0; j <= i; j++)
                    res[0].push_back(v[j]);
                break;
            }
        }
    }

    if(res[0].size() != n) {
        int left_sum = 0, right_sum = 0;
        for(int i = 0; i < n; i++) {
            if(i == 0 || i == n-1)
                res[1].push_back(v[i]);
            else {
                left_sum += v[i];
                right_sum += v[n-i-1];

                if(left_sum == right_sum) {
                    res[1].clear();
                    for(int j = i; j < n; j++)
                        res[1].push_back(v[j]);
                    break;
                }
            }
        }
    }

    return res;
}
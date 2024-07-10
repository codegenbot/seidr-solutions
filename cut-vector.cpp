#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    if (n == 1) {
        return {{v[0]}};
    }
    for (int i = 1; i < n; i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += v[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += v[j];
        }
        if (abs(sum1 - sum2) <= abs(v[i] - sum1)) {
            result.push_back(vector<int>(v.begin(), v.begin() + i));
            result.push_back({v[i]});
            for (int j = i; j < n; j++) {
                result.back().push_back(v[j]);
            }
            return result;
        }
    }
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; i++) {
        sum1 += v[i];
    }
    for (int i = n / 2; i < n; i++) {
        sum2 += v[i];
    }
    if (abs(sum1 - sum2) <= abs(v[n / 2] - sum1)) {
        result.push_back(vector<int>(v.begin(), v.begin() + n / 2));
        result.push_back({v[n / 2]});
        for (int j = n / 2; j < n; j++) {
            result.back().push_back(v[j]);
        }
        return result;
    } else if (abs(sum1 - sum2) <= abs(sum2)) {
        result.push_back(vector<int>(v.begin(), v.end()));
        return {result[0], {}};
    } else {
        for (int i = 0; i < n / 2; i++) {
            result[0].push_back(v[i]);
        }
        result[1] = vector<int>(v.begin() + n / 2, v.end());
        return result;
    }
}
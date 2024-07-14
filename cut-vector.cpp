#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i <= n / 2; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < n; j++) {
            sumRight += v[j];
        }
        
        if (sumLeft == sumRight) {
            res[0] = vector<int>(i);
            res[1] = vector<int>(n - i);
            copy(v.begin(), v.begin() + i, res[0].begin());
            copy(v.begin() + i, v.end(), res[1].begin());
            return res;
        }
    }
    
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i <= n / 2; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < n; j++) {
            sumRight += v[j];
        }
        
        if (abs(sumLeft - sumRight) < minDiff) {
            minDiff = abs(sumLeft - sumRight);
            pos = i;
        }
    }
    
    res[0] = vector<int>(pos);
    res[1] = vector<int>(n - pos);
    copy(v.begin(), v.begin() + pos, res[0].begin());
    copy(v.begin() + pos, v.end(), res[1].begin());
    return res;
}

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i <= n / 2; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < n; j++) {
            sumRight += v[j];
        }
        
        if (sumLeft == sumRight) {
            res[0] = vector<int>(i);
            res[1] = vector<int>(n - i);
            copy(v.begin(), v.begin() + i, res[0].begin());
            copy(v.begin() + i, v.end(), res[1].begin());
            return res;
        }
    }
    
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i <= n / 2; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }
        for (int j = i; j < n; j++) {
            sumRight += v[j];
        }
        
        if (abs(sumLeft - sumRight) < minDiff) {
            minDiff = abs(sumLeft - sumRight);
            pos = i;
        }
    }
    
    res[0] = vector<int>(pos);
    res[1] = vector<int>(n - pos);
    copy(v.begin(), v.begin() + pos, res[0].begin());
    copy(v.begin() + pos, v.end(), res[1].begin());
    return res;
}
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> result1, result2;
    int minDiff = INT_MAX;
    int spot = -1;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i + 1]) {
            result1.push_back(v[i]);
            result2.push_back(v[i + 1]);
            spot = i;
            break;
        } else {
            int diff = abs(v[i] - v[i + 1]);
            if (diff < minDiff) {
                minDiff = diff;
                spot = i;
            }
        }
    }

    if (spot == -1) {
        result1.push_back(v[n - 1]);
        result2.push_back(0);
    } else {
        result1.push_back(v[spot]);
        result2.push_back(v[spot + 1]);
    }

    return {result1, result2};
}

int main() {
    vector<int> v = {1, 0};
    auto result = cutVector(v);
    cout << "Result: " << endl;
    for (auto& subvector : result) {
        cout << "[";
        for (auto& element : subvector) {
            cout << element << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}
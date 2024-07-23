#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<int, int> splitIndex(-1, -1);
    
    for (int i = 0; i < v.size(); i++) {
        int sumLeft = 0;
        int sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            sumRight += v[j];
        }
        
        if (sumLeft == sumRight) {
            return {{v[0], v[0]}, v.slice(i, v.size())};
        } else if (abs(sumLeft - sumRight) < minDiff) {
            minDiff = abs(sumLeft - sumRight);
            splitIndex = {i, i};
        }
    }
    
    int leftSum = 0;
    for (int i = 0; i <= splitIndex.first; i++) {
        leftSum += v[i];
    }
    int rightSum = 0;
    for (int i = splitIndex.second + 1; i < v.size(); i++) {
        rightSum += v[i];
    }
    
    return {{v[0], leftSum / (splitIndex.first - splitIndex.second)}, {v[splitIndex.second + 1], v.back()}};
}

int main() {
    vector<int> v = {1, 0};
    pair<vector<int>, vector<int>> result = cutVector(v);
    for (auto num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    for (auto num : result.second) {
        cout << num << " ";
    }
    return 0;
}
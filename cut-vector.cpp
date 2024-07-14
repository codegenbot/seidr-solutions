#include <vector>
#include <climits>

using namespace std;

vector<pair<vector<int>, vector<int>>> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = std::abs(vec[i] - vec[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec(1, vec[0]);
    for (int i = 0; i < cutIndex; i++) {
        leftVec.push_back(vec[i + 1]);
    }

    vector<int> rightVec = vec;
    rightVec.erase(rightVec.begin() + cutIndex);

    return {{leftVec}, {rightVec}};
}
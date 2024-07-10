```cpp
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> myVector;
bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::pair<int, int>>& path, int target) {
    std::vector<int> result;
    for (auto& step : path) {
        result.push_back(step.first);
        if (step.second == target) break;
    }
    return result;
}

int main() {
    int m = myVector.size();
    if (m == 0) return 1;
    int n = myVector[0].size();

    std::vector<int> input;
    for (int i = 0; i < m; i++) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    myVector.resize(m);

    for (int i = 0; i < m; i++) {
        myVector[i].resize(n);
        for (int j = 0; j < n; j++) {
            std::cin >> myVector[i][j];
        }
    }

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
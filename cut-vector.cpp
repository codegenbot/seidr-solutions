#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> vec) {
    int minDiff = INT_MAX;
    int index = -1;

    for (int i = 0; i < vec.size(); ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j)
            sumLeft += vec[j];
        for (int j = i + 1; j < vec.size(); ++j)
            sumRight += vec[j];

        if (sumLeft == sumRight || abs(sumLeft - sumRight) < minDiff) {
            minDiff = abs(sumLeft - sumRight);
            index = i;
        }
    }

    std::vector<int> left, right;
    for (int i = 0; i < index; ++i)
        left.push_back(vec[i]);
    for (int i = index; i < vec.size(); ++i)
        right.push_back(vec[i]);

    return {left, right};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int &x : vec) 
        cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(vec);

    cout << "[";
    for (int x : res.first)
        cout << x << " ";
    cout << "] ["; 
    for (int x : res.second)
        cout << x << " ";
    cout << "]" << endl;

    return 0;
}
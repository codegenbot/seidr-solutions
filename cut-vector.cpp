#include <utility>

// ...

std::pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    // ...
    return std::make_pair(left, right);
}

int main() {
    vector<int> vec = {1, 0};
    auto result = cutVector(vec);
    cout << "Left: ";
    for (auto& x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (auto& x : result.second) {
        cout << x << " ";
    }
    cout << endl;
}
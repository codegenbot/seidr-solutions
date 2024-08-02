#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    vector<int> left;
    vector<int> right;

    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size()) {
            left = v.substr(0, i);
            right = {v[i]};
        } else {
            left = v.substr(0, i);
            right = v.substr(i);
        }

        int diff = abs(left.back() - right.front());
        if (diff < min_diff) {
            min_diff = diff;
            break;
        }
    }

    return {left, right};
}

int main() {
    vector<int> input;
    // Read the input from user
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        input.push_back(num);
    }

    vector<vector<int>> result = cutVector(input);

    for (auto vec : result) {
        for (int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
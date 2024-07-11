#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    if (input.empty()) {
        cerr << "Empty input vector" << endl;
        return 1;
    }

    int diff = numeric_limits<int>::max();
    int idx = 0;
    for (int i = 1; i < input.size(); ++i) {
        if (abs(accumulate(input.begin(), input.begin() + i, 0) - accumulate(input.begin() + i, input.end(), 0)) < diff) {
            diff = abs(accumulate(input.begin(), input.begin() + i, 0) - accumulate(input.begin() + i, input.end(), 0));
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < input.size(); ++i) {
        cout << input[i] << endl;
    }

    return 0;
}
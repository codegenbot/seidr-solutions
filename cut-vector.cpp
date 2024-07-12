#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

int main() {
    vector<int> input;
    int num;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        input.push_back(num);
    }

    int diff = numeric_limits<int>::max();
    int idx = 0;

    for (int i = 1; i < input.size(); ++i) {
        int left_sum = accumulate(input.begin(), input.begin() + i, 0);
        int right_sum = accumulate(input.begin() + i, input.end(), 0);
        if (abs(left_sum - right_sum) <= diff) {
            diff = abs(left_sum - right_sum);
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
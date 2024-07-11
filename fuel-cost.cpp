#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> nums;
    double n;
    while (cin >> n) {
        nums.push_back(n);
        if (cin.peek() == '\n') {
            break;
        }
    }

    double sum = 0;
    for (double num : nums) {
        sum += (num / 3) - 2;
    }

    cout << sum << "\n";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;

    while (cin >> input) {
        nums.push_back(input);
    }

    if (!cin.eof()) {
        cout << "Invalid input format. Please enter positive integers only." << endl;
        return 1;
    }

    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}
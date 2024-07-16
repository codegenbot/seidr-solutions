#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    string line;
    getline(cin, line);
    istringstream iss(line);
    int n;
    while (iss >> n) {
        nums.push_back(n);
    }

    long long sum = 0;

    for (int num : nums) {
        sum += static_cast<int>(std::floor(num / 3.0)) - 2;
    }

    cout << sum << endl;

    return 0;
}
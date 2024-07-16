#include <iostream>
#include <vector>
#include <sstream>
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

    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }

    cout << sum * 3 << endl;

    return 0;
}
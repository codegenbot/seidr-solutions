#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string numbers = "three one five";
    vector<string> nums;
    for (auto& n : numbers) {
        if (n == ' ') continue;
        nums.push_back(std::string(1, n));
    }
    sort(nums.begin(), nums.end());
    cout << "Sorted: ";
    for (auto& n : nums) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
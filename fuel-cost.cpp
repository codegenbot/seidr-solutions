#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    while (getline(cin, line)) {
        stringstream ss(line);
        int n;
        while (ss >> n) {
            nums.push_back(n);
        }
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << "\n";
    
    return 0;
}
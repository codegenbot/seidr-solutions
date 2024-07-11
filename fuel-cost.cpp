#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    vector<int> nums;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}
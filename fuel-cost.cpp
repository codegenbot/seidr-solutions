#include <iostream>
#include <vector>
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
        sum += (int)(num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}
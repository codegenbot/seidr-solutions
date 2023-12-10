
#include <vector>
#include <iostream>

using namespace std;

// Define main function
int main(void) {
    // Take input from user
    vector<int> nums;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    // Call leaders function to get leaders
    vector<int> leaders = leaders(nums);

    // Print the leaders
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}

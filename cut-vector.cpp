#include <iostream>
#include <vector>

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

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_idx = -1;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_idx = i;
            break;
        }
    }

    vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
    vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

    for (int num : subvec1) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : subvec2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
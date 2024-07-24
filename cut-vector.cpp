#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left, right;
    for (int i = 0; i < cut_index; i++) {
        left.push_back(nums[i]);
    }
    for (int i = cut_index + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(numbers);
    cout << "Left: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs((long long)nums[i] - (long long)nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}

int main() {
    // Test cases
    vector<int> test1 = {1};
    vector<int> test2 = {1, 10};
    vector<int> test3 = {1, 100};
    vector<int> test4 = {1, 1000};
    vector<int> test5 = {1, 10000};

    pair<vector<int>, vector<int>> result1 = cutVector(test1);
    pair<vector<int>, vector<int>> result2 = cutVector(test2);
    pair<vector<int>, vector<int>> result3 = cutVector(test3);
    pair<vector<int>, vector<int>> result4 = cutVector(test4);
    pair<vector<int>, vector<int>> result5 = cutVector(test5);

    cout << "Test1: ";
    for (int num : result1.first) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : result1.second) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test2: ";
    for (int num : result2.first) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : result2.second) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test3: ";
    for (int num : result3.first) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : result3.second) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test4: ";
    for (int num : result4.first) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : result4.second) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test5: ";
    for (int num : result5.first) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : result5.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> vec;
    
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        vec.push_back({ones, num});
    }
    
    sort(vec.begin(), vec.end());
    
    vector<int> result;
    
    for (const auto& p : vec) {
        result.push_back(p.second);
    }
    
    return result;
}

int main() {
    // Test cases
    vector<int> test1 = {1, 5, 2, 3, 4};
    vector<int> test2 = {-2, -3, -4, -5, -6};
    vector<int> test3 = {1, 0, 2, 3, 4};

    cout << "Test case 1: ";
    for (int num : sort_vector(test1)) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test case 2: ";
    for (int num : sort_vector(test2)) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test case 3: ";
    for (int num : sort_vector(test3)) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
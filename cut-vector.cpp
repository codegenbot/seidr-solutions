#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 1; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            right_sum += vec[j];
        }
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}
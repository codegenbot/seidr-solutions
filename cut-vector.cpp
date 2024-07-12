#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = min_element(input.begin() + 1, input.end(), [&input](int i, int j) {
        int sum1 = accumulate(input.begin(), input.begin() + i, 0);
        int sum2 = accumulate(input.begin() + i, input.end(), 0);
        return abs(sum1 - sum2) < abs(accumulate(input.begin(), input.begin() + j, 0) - accumulate(input.begin() + j, input.end(), 0));
    }) - input.begin();
    
    for (int i = 0; i < cut_index; ++i) {
        cout << input[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cut_index; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}
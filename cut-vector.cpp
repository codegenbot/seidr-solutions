#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < numbers.size(); ++i) {
        int diff = abs(accumulate(numbers.begin(), numbers.begin() + i, 0) - accumulate(numbers.begin() + i, numbers.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << numbers[i] << "\n";
    }
    
    cout << 0 << "\n";
    
    for (int i = cut_index; i < numbers.size(); ++i) {
        cout << numbers[i] << "\n";
    }
    
    cout << 0 << "\n";
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> order_by_points(vector<int> nums); // Function declaration

bool issame(vector<int> a, vector<int> b) {
    // Existing comparison logic
}

vector<int> order_by_points(vector<int> nums) {
    // Existing ordering logic
}

int main() {
    vector<int> numbers = {123, 321, 456, 789};
    
    sort(numbers.begin(), numbers.end(), issame);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    
    cout << endl;
    
    numbers = order_by_points(numbers);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    
    // Additional test case
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}
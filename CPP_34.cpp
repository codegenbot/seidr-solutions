#include <iostream>
#include <set>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const set<int>& a, const set<int>& b) {
    return a == b;
}

int main() {
    vector<int> nums;
    int num;
    
    cout << "Enter numbers (Enter -1 to end input): ";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        nums.push_back(num);
    }

    set<int> num_set(nums.begin(), nums.end());
    
    assert(issame(num_set, set<int>({0, 2, 3, 5, 9, 123}));
    
    return 0;
}
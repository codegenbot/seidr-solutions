#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    if (numbers.empty()) return result;
    int max_so_far = numbers[0];
    for (int num : numbers) {
        if (num > max_so_far) {
            max_so_far = num;
        }
        result.push_back(max_so_far);
    }
    return result;
}

int main() {
    assert(rolling_max({3, 2, 3, 100, 3}) == vector<int>({3, 3, 3, 100, 100}));
    cout << "Test passed!" << endl;
    return 0;
}
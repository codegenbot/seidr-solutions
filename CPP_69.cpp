#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int search(const vector<int>& lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first) {
            result = max(result, pair.first);
        }
    }
    return result;
}

int main() {
    vector<int> test = {3, 10, 10, 9, 2};
    cout << (search(test) == -1) << endl; // Should print 1 (true)
    return 0;
}
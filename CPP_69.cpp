#include <unordered_map>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int result = -1;
    for (const auto& [num, count] : freq) {
        if (count >= num) {
            result = max(result, num);
        }
    }

    return result;
}

int main() {
    vector<int> input = {3, 10, 10, 9, 2};
    cout << search(input) << endl;
    return 0;
}
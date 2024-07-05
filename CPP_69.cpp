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
    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }
    cout << search(lst) << endl;
    return 0;
}
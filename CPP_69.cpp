#include <iostream>
#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    std::unordered_map<int, int> freq;
    int ans = -1;

    for (int num : lst) {
        freq[num]++;
        if (freq[num] >= num && num > ans) {
            ans = num;
        }
    }

    return ans;
}

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int result = search(input);
    cout << result << endl;

    return 0;
}
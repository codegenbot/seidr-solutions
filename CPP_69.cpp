```cpp
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> lst[i];
    }

    int result = search(lst);

    if (result == -1)
        cout << "No such number exists in the list.\n";
    else
        cout << "The first number that is a multiple of its frequency is: " << result << "\n";

    return 0;
}

int std::search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;
}
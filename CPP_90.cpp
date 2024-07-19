```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or some other value to indicate "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or some other value to indicate "None"
}

int main() {
    vector<int> lst;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        int num;
        cin >> num;
        lst.push_back(num);
    }
    assert(next_smallest(lst) != -1);
    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in your list: ";
    std::cin >> n;

    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cout << "Element" << i + 1 << ":";
        cin >> lst[i];
    }
    
    int result = next_smallest(lst);

    if (result == -1)
        cout << "No smallest number found in the list.";
    else
        cout << "The next smallest number is: " << result;

    return 0;
}
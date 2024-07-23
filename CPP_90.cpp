#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int num;
    vector<int> lst;
    cout << "Enter the numbers (enter -1 to stop input):" << endl;
    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }
    
    if (!lst.empty()) {
        int result = next_smallest(lst);
        cout << "The next smallest number is: " << result << endl;
    } else {
        cout << "No numbers entered." << endl;
    }

    return 0;
}

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; // or any other value that represents None
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or any other value that represents None
}
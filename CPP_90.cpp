```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int next_smallest(vector<int> lst) {
        if (lst.empty()) return -1; 
        vector<int> sorted = lst;
        sort(sorted.begin(), sorted.end());
        for (int i = 0; i < sorted.size() - 1; i++) {
            if (sorted[i] != sorted[i + 1]) {
                return sorted[i + 1];
            }
        }
        return -1; 
    }

    int main() {
        vector<int> lst;
        cout << "Enter numbers separated by space: ";
        for(int i = 0; i < 5; i++) {
            int x;
            cin >> x;
            lst.push_back(x);
        }
        cout << "Next smallest number is: " << next_smallest(lst) << endl;
    }

}
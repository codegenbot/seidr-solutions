```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; 
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; 
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    cout << "The next smallest element is: " << next_smallest(lst) << endl;
    return 0;
}
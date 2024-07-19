```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; 
}

int main() {
    int n;
    std::cin >> n;
    vector<int> lst(n);
    for(int i=0; i<n; i++)
        cin>>lst[i];
    
    assert(next_smallest(lst) != -1);
    cout << "The next smallest number is: " << next_smallest(lst) << endl;
    return 0;
}
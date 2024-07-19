#include <iostream>
#include <vector>
#include <algorithm>

int search(vector<int>& lst) {
    int max = *max_element(lst.begin(), lst.end());
    return max;
}

int main() {
    vector<int> lst(5); 
    for (int i = 0; i < 5; ++i) { 
        cin >> lst[i]; 
    }
    int result = search(lst);
    cout << "The largest number in the list is: " << result << endl;
    return 0;
}
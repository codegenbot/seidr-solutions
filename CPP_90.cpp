#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return -1;
    }
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != lst[0]) {
            return lst[i];
        }
    }
    return -1;
}

int main() {
    vector<int> lst = {34, 12, -35, -45}; 
    int result = (lst.size() > 1) ? (next_smallest(lst)) : -1; 
    cout << "The next smallest number is: " << result << endl;
    
    return 0;
}
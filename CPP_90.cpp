#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> result;
    if (lst.size() < 2) {
        return -1;
    }
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != lst[0]) {
            result.push_back(lst[i]);
            break;
        }
    }
    return result.empty() ? -1 : lst[0];
}

int main() {
    vector<int> lst = {34, 12, -35, -45}; 
    int result = (lst.size() > 1) ? next_smallest(lst) : -1; 
    cout << "The next smallest number is: " << result << endl;
    
    return 0;
}
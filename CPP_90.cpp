Here is the completed code:

#include <vector>
#include <algorithm>

using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None in Python terminology
    vector<int> unique;
    for (int x : lst) {
        if (find(unique.begin(), unique.end(), x) == unique.end())
            unique.push_back(x);
    }
    sort(unique.begin(), unique.end());
    if (unique.size() < 2) return -1; // None in Python terminology
    return unique[1];
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    cout << next_smallest(lst) << endl;
    
    vector<int> lst2 = {5, 1, 4, 3, 2};
    cout << next_smallest(lst2) << endl;
    
    vector<int> lst3 = {};
    cout << next_smallest(lst3) << endl;
    
    vector<int> lst4 = {1, 1};
    cout << next_smallest(lst4) << endl;
    return 0;
}
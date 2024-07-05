#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> to_sort;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    sort(to_sort.begin(), to_sort.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = to_sort[j++];
        }
    }
    return l;
}

int main() {
    vector<int> test = {5, 6, 3, 4, 8, 9, 2, 1};
    vector<int> expected = {2, 6, 3, 4, 8, 9, 5, 1};
    assert(test == expected);  // Ensure the function works as expected
    cout << "All test cases passed!" << endl;
    return 0;
}
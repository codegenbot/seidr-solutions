#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> indices_divisible_by_three;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices_divisible_by_three.push_back(l[i]);
        }
    }
    sort(indices_divisible_by_three.begin(), indices_divisible_by_three.end());
    int index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = indices_divisible_by_three[index++];
        }
    }
    return l;
}

int main() {
    vector<int> result = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    vector<int> expected = {2, 6, 3, 4, 8, 9, 5, 1};
    
    assert(result == expected);
    cout << "Test passed!" << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool take_min = true;
    while (left <= right) {
        if (take_min) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        take_min = !take_min;
    }
    return result;
}

int main() {
    assert(strange_sort_list({111111}) == vector<int>{111111});
    cout << "Test passed!" << endl;
    return 0;
}
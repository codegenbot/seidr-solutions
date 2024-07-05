#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    bool pickMin = true;
    while (left <= right) {
        if (pickMin) {
            result.push_back(lst[left++]);
        } else {
            result.push_back(lst[right--]);
        }
        pickMin = !pickMin;
    }
    return result;
}

int main() {
    assert(strange_sort_list({111111}) == vector<int>{111111});
    assert(strange_sort_list({1, 2, 3, 4, 5}) == vector<int>{1, 5, 2, 4, 3});
    assert(strange_sort_list({5, 4, 3, 2, 1}) == vector<int>{1, 5, 2, 4, 3});
    assert(strange_sort_list({1, 2, 3}) == vector<int>{1, 3, 2});
    assert(strange_sort_list({1}) == vector<int>{1});
    return 0;
}
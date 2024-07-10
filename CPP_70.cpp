#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it = lower_bound(lst.begin(), lst.end(), minVal);
        if (it != lst.end() && *it == minVal) {
            result.push_back(*it);
            lst.erase(it);
            minVal = min_element(lst.begin(), lst.end())->first;
        } else {
            auto it2 = upper_bound(lst.begin(), lst.end(), maxVal);
            --it2;
            result.push_back(*it2);
            lst.erase(it2);
            maxVal = max_element(lst.begin(), lst.end())->first;
        }
    }

    return result;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {5, 5, 5, 5};
    vector<int> v3 = {};

    cout << "v1: ";
    for (int i : v1) cout << i << " ";
    cout << endl;
    cout << "Expected result: 1 4 2 3" << endl;

    cout << "v2: ";
    for (int i : v2) cout << i << " ";
    cout << endl;
    cout << "Expected result: 5 5 5 5" << endl;

    cout << "v3: ";
    for (int i : v3) cout << i << " ";
    cout << endl;
    cout << "Expected result: " << endl;

    return 0;
}
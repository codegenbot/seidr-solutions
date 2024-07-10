#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        minMax.push_back(min);
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == min || *it == max) {
                lst.erase(it);
                break;
            }
        }
    }

    return minMax;
}

int main() {
    vector<int> lst1 = {1, 2, 3, 4};
    vector<int> result1 = strange_sort_vector(lst1);
    for (auto x : result1) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> lst2 = {5, 5, 5, 5};
    vector<int> result2 = strange_sort_vector(lst2);
    for (auto x : result2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
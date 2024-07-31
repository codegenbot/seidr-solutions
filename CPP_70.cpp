#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function declaration
vector<int> strange_sort_vector(vector<int> lst);

int main() {
    // You can use this function to test the output
    vector<int> result = strange_sort_vector({1, 3, 2});
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

// Your function implementation
vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        minMax.push_back(min);
        minMax.push_back(max);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
    }
    return minMax;
}
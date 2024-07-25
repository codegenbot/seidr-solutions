#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result; // handle empty vector
    
    sort(lst.begin(), lst.end()); // sort the input vector

    while (!lst.empty()) {
        result.push_back(lst[0]); // add the smallest element
        lst.erase(lst.begin()); // remove the smallest element from the list
        
        if (!lst.empty()) {
            auto it = max_element(lst.begin(), lst.end()); // find the largest remaining element
            result.push_back(*it); // add the largest element
            lst.erase(it); // remove the largest element from the list
        }
    }

    return result;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {5, 5, 5, 5};
    vector<int> test3 = {};

    cout << "Test 1: ";
    for (int i : strange_sort_vector(test1)) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Test 2: ";
    for (int i : strange_sort_vector(test2)) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Test 3: ";
    for (int i : strange_sort_vector(test3)) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
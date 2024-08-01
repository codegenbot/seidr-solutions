#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(lst[0]);
        lst.erase(lst.begin());
        
        if (!lst.empty())
            sort(lst.begin(), lst.end());
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
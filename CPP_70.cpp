```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        
        auto itMin = find(lst.begin(), lst.end(), minVal);
        auto itMax = find(itMin, lst.end(), maxVal);
        
        result.push_back(*itMin);
        lst.erase(itMin);
        result.push_back(*itMax);
        lst.erase(itMax);
    }
    
    return result;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {5, 5, 5, 5};
    vector<int> test3 = {};
    
    cout << "Test 1: ";
    for (auto i : strange_sort_vector(test1)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Test 2: ";
    for (auto i : strange_sort_vector(test2)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Test 3: ";
    for (auto i : strange_sort_vector(test3)) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
        else
            break;
        
        lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
    }
    
    return result;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {5, 5, 5, 5};
    vector<int> test3 = {};
    
    cout << "Test 1: ";
    for (int i : strange_sort_list(test1)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Test 2: ";
    for (int i : strange_sort_list(test2)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Test 3: ";
    for (int i : strange_sort_list(test3)) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty())
            result.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
    }
    return result;
}
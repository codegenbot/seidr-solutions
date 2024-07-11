#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) 
        return false;
        
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) 
            return false;
    }
    
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<vector<int>> output;
    vector<bool> minThenMax(lst.size(), false);

    for (int i = 0; i < lst.size(); i++) {
        if (i == 0) {
            sort(lst.begin(), lst.end());
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
            minThenMax[i] = true;
        } else {
            if (minThenMax[i-1]) {
                sort(lst.begin(), lst.end());
                result.push_back(*max_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
                minThenMax[i] = false;
            } else {
                sort(lst.begin(), lst.end());
                result.push_back(*min_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
                minThenMax[i] = true;
            }
        }
    }

    return result;
}
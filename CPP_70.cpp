#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    if(lst.empty()) return result; // If input list is empty return an empty list
    
    vector<int> minMax;
    while(!lst.empty()){
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        
        result.push_back(min);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end()); // Remove minimum value from list
        if(!lst.empty())
            result.push_back(max);
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end()); // Remove maximum value from list
    }
    
    return result;
}

int main() {
    assert (issame(strange_sort_vector({111111}) , {111111}));
    return 0;
}
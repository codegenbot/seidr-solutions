#include <algorithm>
#include <vector>
#include <limits>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    for(int i = 0; i < 2; i++) {
        if(!i){
            result.push_back(*min_element(lst.begin(), lst.end()));
        } else {
            result.push_back(*max_element(lst.begin(), lst.end()));
        }
        auto it = remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end()));
        lst.erase(it, lst.end());
        
        if (!lst.empty()) {
            sort(lst.begin(), lst.end());
        }
    }
    
    return result;
}

int main() {
    assert(issame(strange_sort_vector({11111}) , {1,2,3,4,5}));
    return 0;
}
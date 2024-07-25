```cpp
#include <algorithm>
#include <vector>
#include <iterator>

bool issame(std::vector<int> a,std::vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    std::sort(lst.begin(), lst.end());
    result.push_back(*std::min_element(lst.begin(), lst.end()));
    lst.erase(std::remove(lst.begin(), lst.end(), *std::min_element(lst.begin(), lst.end())), lst.end());
    
    if (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        result.push_back(*std::max_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *std::max_element(lst.begin(), lst.end())), lst.end());
    }
    
    while (!lst.empty()) {
        std::sort(lst.begin(), lst.end());
        result.push_back(*std::min_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *std::min_element(lst.begin(), lst.end())), lst.end());
        
        if (!lst.empty()) {
            std::sort(lst.begin(), lst.end());
            result.push_back(*std::max_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *std::max_element(lst.begin(), lst.end())), lst.end());
        }
    }
    
    return result;
}

int main(){
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}
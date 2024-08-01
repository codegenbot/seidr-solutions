#include <algorithm>
#include <cassert>
#include <vector>

bool incr_list(std::vector<int>& lst){
    for(auto& elem : lst){
        ++elem;
    }
    return true;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    // Test cases can be added here for validation
    return 0;
}
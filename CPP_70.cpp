#include <vector>
#include <cassert>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> strange_sort_list(const std::vector<int>& input) {
    vector<int> sorted_list = input;
    sort(sorted_list.begin(), sorted_list.end());
    return sorted_list;
}

int main(){
    assert (issame(strange_sort_list({111111}), {111111}));
    
    return 0;
}
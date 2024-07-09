#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Implement the issame function logic here
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int n = lst.size();
    int i = 0, j = n - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}

int main(){
    // Write test cases using assert here
    assert (issame(strange_sort_list({111111}), {111111}));
    
    return 0;
}
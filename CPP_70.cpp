#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i]);
        if (i != j) {
            result.push_back(lst[j]);
        }
        i++;
        j--;
    }
    return result;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
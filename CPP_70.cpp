#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int main() {
    assert (issame(strange_sort_vector({111}), {1, 1, 1, 1}) );
    return 0;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());

    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}
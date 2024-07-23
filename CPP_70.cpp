```c++
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<int> strange_sort_list(vector<int> v) {
    sort(v.begin(),v.end());
    return v;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
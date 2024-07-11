#include <algorithm>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) 
        return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i]) 
            return false;
    }
    return true;
}

bool has_repeated(vector<int> lst) {
    vector<int> seen;
    for (int x : lst)
        if(find(seen.begin(), seen.end(), x) == seen.end())
            seen.push_back(x);
        else
            return true;

    return false;
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

int main() {
    vector<int> test = strange_sort_vector({11111});
    assert(issame(test, {11111}));
    return 0;
}
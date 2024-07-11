#include <algorithm>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size()!=v2.size()) return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i]!=v2[i]) return false;
    }
    return true;
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
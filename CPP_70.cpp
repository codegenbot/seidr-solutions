#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    int n = lst.size();
    int i = 0, j = n-1;
    while(i <= j) {
        result.push_back(lst[i]);
        if(i != j)
            result.push_back(lst[j]);
        i++;
        j--;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));

    return 0;
}
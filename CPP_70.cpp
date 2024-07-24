#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && (a == b);
}

vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return lst;

    vector<int> result;
    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    return result;
}
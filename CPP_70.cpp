#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;

    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());

        if (!lst.empty())
            minVal = *min_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());

        result.insert(result.end(), minVal);
    }

    return result;
}

int main() {
    using namespace std;

    assert(issame(strange_sort_list({111111}), {111111}));
    
    return 0;
}
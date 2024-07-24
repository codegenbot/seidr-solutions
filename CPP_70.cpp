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

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());

        auto it_min = find_if(lst.begin(), lst.end(), [min_val](int val) { return val == min_val; });
        auto it_max = find_if(lst.begin(), lst.end(), [max_val](int val) { return val == max_val; });

        result.push_back(*it_min);
        lst.erase(it_min);
        result.push_back(*it_max);
        lst.erase(distance(it_max, end(lst)), 1);
    }

    return result;
}
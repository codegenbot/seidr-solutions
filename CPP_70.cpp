#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool same(vector<int> a, vector<int> b) {
    return same(vector<int>(a), vector<int>(b));
}

bool has_val(const vector<int>& lst, int val) {
    return find(lst.begin(), lst.end(), val) != lst.end();
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        if (has_val(lst, min_val)) {
            result.push_back(*find_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; }));
            lst.erase(find_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; }));
        } else if (has_val(lst, max_val)) {
            result.push_back(*find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; }));
            lst.erase(find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; }));
        }
    }

    return result;
}

int sort_list() {
    vector<int> a = {1, 2, 3};
    vector<int> b = strange_sort_list(a);
    if (!same(a, b)) {
        for (size_t i = 0; i < a.size(); ++i) {
            assert(b[i] == a[i]);
        }
    }
    return 0;
}
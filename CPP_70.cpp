#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool same_vectors(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto new_end = remove(lst.begin(), lst.end(), min_val);
        lst.erase(new_end, lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            auto new_end2 = remove_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; });
            lst.erase(new_end2, lst.end());
        }
    }
    return result;
}

int main() {
    assert(same_vectors({1, 1, 1, 1, 1}, strange_sort_list({1, 1, 1, 1, 1})));
}
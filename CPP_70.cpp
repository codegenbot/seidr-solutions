#include <vector>
#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase-remove_one(lst.begin());
        if (lst.size() > 0) {
            result.push_back(max_val);
            lst.erase(remove_one(lst.begin()), lst.end());
        }
    }
    return result;
}

int remove_one(const vector<int>::iterator& it) {
    vector<int>::iterator newEnd = it + 1;
    while (newEnd != lst.end() && *newEnd == *it) {
        ++newEnd;
    }
    return newEnd - lst.begin();
}
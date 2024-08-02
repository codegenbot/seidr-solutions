#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool is_sorted(const vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

bool is_distinct(const vector<int>& lst) {
    return lst.size() == set<int>(lst.begin(), lst.end()).size();
}

bool is_sorted_and_distinct(const vector<int>& lst) {
    return is_sorted(lst) && is_distinct(lst);
}
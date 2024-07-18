#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int start = 0, end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start++]);
        if (start <= end) {
            result.push_back(lst[end--]);
        }
    }
    return result;
}

assert(issame(strange_sort_list({111111}), {111111}));
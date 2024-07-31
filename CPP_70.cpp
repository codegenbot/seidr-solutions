#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b);

vector<int> strange_sort_list(vector<int> lst);

bool issame(std::vector<int> a, std::vector<int> b) {
    assert(a.size() == b.size());
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            result.push_back(a[i]);
            result.push_back(b[i]);
        }
    }
    return result.empty();
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}
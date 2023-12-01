#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Function implementation
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left != right) {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        } else {
            result.push_back(lst[left]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
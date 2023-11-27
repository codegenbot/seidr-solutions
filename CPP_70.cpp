#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    // Function implementation here
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int start = 0;
    int end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start]);
        if (start != end) {
            result.push_back(lst[end]);
        }
        start++;
        end--;
    }
    return result;
}

int main() {
    assert (issame(strange_sort_list({111111}) , {111111}));
    // Additional test cases here
    return 0;
}
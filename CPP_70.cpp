#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst);

int main() {
    // main function code here
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}
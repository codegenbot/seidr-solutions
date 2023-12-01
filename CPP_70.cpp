#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b);
vector<int> strange_sort_list(vector<int> lst);

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    int n = lst.size();
    vector<int> result(n);
    int i = 0;
    int j = n - 1;
    int k = 0;

    while (i <= j) {
        if (i == j) {
            result[k++] = lst[i++];
        } else {
            result[k++] = lst[i++];
            result[k++] = lst[j--];
        }
    }

    return result;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({3, 2, 1}), {1, 2, 3}));
    // Add more test cases here

    return 0;
}
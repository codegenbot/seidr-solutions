#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l);

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 3, 4};
    assert(issame(incr_list(a), b) == true);
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i] + 1);
    }
    return result;
}
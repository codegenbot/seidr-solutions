#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    // Test cases
    vector<int> input1 = {1, 2, 1, 3, 2, 4, 3, 5};
    vector<int> output1 = {1, 2, 3, 4, 5};
    assert(issame(unique(input1), output1));

    vector<int> input2 = {4, 4, 3, 3, 2, 2, 1, 1};
    vector<int> output2 = {1, 2, 3, 4};
    assert(issame(unique(input2), output2));

    vector<int> input3 = {5, 5, 5, 5, 5};
    vector<int> output3 = {5};
    assert(issame(unique(input3), output3));

    vector<int> input4 = {1, 2, 3, 4, 5};
    vector<int> output4 = {1, 2, 3, 4, 5};
    assert(issame(unique(input4), output4));

    return 0;
}
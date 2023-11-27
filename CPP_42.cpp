#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // implementation
}

vector<int> incr_list(vector<int> l);

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    // add any additional test cases or code here
    return 0;
}
#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main(){
    vector<int> l = {1, 2, 3, 4, 5};
    vector<int> incr_l = incr_list(l);
    vector<int> expected_incr_l = {2, 3, 4, 5, 6};
    assert(issame(incr_l, expected_incr_l));
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
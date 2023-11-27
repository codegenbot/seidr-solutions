#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
}

vector<int> incr_list(vector<int> l);

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main(){
    assert(issame(incr_list({1, 2, 3}), {2, 3, 4}));
    return 0;
}
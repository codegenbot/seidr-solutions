#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(int n){
    vector<int> result;
    result.push_back(n);
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        result.push_back(n);
    }
    return result;
}

int main(){
    vector<int> expected = {5, 6, 8, 10, 12};
    vector<int> result = make_a_pile(5);
    assert(issame(expected, result));
    return 0;
}
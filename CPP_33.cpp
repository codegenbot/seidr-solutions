#include <algorithm>
#include <assert.h>
#include <vector>

using namespace std;

vector<int> sort_third(const vector<int>& l);

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_third(const vector<int>& l){
    vector<int> lSorted(l);
    for(int i=0; i<lSorted.size(); i++){
        if(i%3 == 0){
            sort(lSorted.begin()+i, lSorted.begin()+i+3);
        }
    }
    return lSorted;
}

int main(){
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}
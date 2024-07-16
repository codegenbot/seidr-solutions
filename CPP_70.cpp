#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
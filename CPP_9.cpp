#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
    // ...
}

vector<int> rolling_max(vector<int> numbers){
    // implementation of rolling_max function
    // ...
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}
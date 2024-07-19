#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b) {
    // code for issame function
}

vector<int> make_a_pile(int n) {
    vector<int> result;
    result.push_back(n);

    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        result.push_back(n);
    }

    return result;
}
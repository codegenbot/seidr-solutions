#include <iostream>
#include <vector>
#include <cassert> 

using namespace std;

bool same(vector<float> a, vector<float> b) { 
    return a == b;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int myMain() { 
    assert(same(get_positive({}), {}) == true); 
    cout << "Fixed!" << endl;
    return 0;
}
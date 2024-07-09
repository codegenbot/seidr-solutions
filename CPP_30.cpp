#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
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

int main() {
    assert(issame(get_positive({}), {}));
    cout << "Fixed!" << endl;
    return 0;
}
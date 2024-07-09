#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    vector<int> modified = incr_list(input);
    
    if (issame(input, modified)) {
        cout << "The input and modified vectors are the same." << endl;
    } else {
        cout << "The input and modified vectors are different." << endl;
    }
    
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    
    return 0;
}
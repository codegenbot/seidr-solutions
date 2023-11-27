#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> l){
    sort(l.begin(), l.end());
    return l;
}

vector<int> expected_output = {0, 2, 3, 5, 9, 123};

vector<int> output = remove_duplicates({5, 3, 5, 2, 3, 3, 9, 0, 123});

assert(issame(output, expected_output));

cout << "Output is correct" << endl;

return 0;
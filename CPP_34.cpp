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

vector<int> expected_output = {0, 2, 3, 5, 9, 123};

vector<int> output;
vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};

input.erase(unique(input.begin(), input.end()), input.end());

output = input;

assert(issame(output, expected_output));

cout << "Output is correct" << endl;

return 0;
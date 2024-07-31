#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> input = {3, 1, 7, 5, 0, 9};
    vector<string> output = by_length(input);
    
    for(auto str : output) {
        cout << str << " ";
    }
    
    cout << endl;
    
    vector<string> expected = {"Nine", "Seven", "Five", "Three", "One"};
    assert(issame(output, expected));
    
    return 0;
}
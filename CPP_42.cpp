#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}

int main() {
    vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    
    assert(issame(incr_list(input), expected));
    
    return 0;
}
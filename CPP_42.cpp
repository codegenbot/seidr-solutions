#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}

int unique_function_name() {
    assert(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) == vector<int>({6, 3, 6, 3, 4, 4, 10, 1, 124}));
    
    return 0;
}
#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

vector<int> incr_list(vector<int> l);
bool issame(vector<int> a, vector<int> b);

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> list1 = {1, 2, 3};
    vector<int> list2 = {1, 2, 4};

    vector<int> incremented_list1 = incr_list(list1);

    assert(!issame(list1, list2));
    assert(issame(list1, incremented_list1));
    
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));

    return 0;
}
#include <vector>
#include <assert.h>

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

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> modified_vec = incr_list(vec);

    for (int num : modified_vec) {
        cout << num << " ";
    }

    return 0;
}
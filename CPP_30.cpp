#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(get_positive({}) == {});
    vector<float> l1 = {1, -2, 3, 4};
    vector<float> l2 = {-5, 6, -7, 8};
    vector<float> l3 = {9, 10, 11, 12};
    
    if (issame(get_positive(l1), get_positive(l2)) && issame(get_positive(l2), get_positive(l3))) {
        cout << "Output: ";
        for (float num : get_positive(l3)) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Output: No same positive numbers found." << endl;
    }
}
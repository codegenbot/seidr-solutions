#include <algorithm>

bool issame(vector<float>& a, vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l_even) {
    sort(l_even.begin(), l_even.end());
}

int main() {
    vector<float> l = {1.2, 3.4, 2.1, 4.5, 5.6};
    vector<float> sorted_l = l;
    sort(sorted_l.begin(), sorted_l.end());
    
    sort_even(l);
    
    if (issame(l, sorted_l)) {
        cout << "Results match the expected sorting" << endl;
    } else {
        cout << "Results do not match the expected sorting" << endl;
    }
    
    return 0;
}
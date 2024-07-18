#include <vector>

bool below_threshold(const vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> l = {1, 3, 5, 7, 9};
    int t = 10;
    
    if (below_threshold(l, t)) {
        cout << "All elements are below threshold." << endl;
    } else {
        cout << "At least one element is at or above threshold." << endl;
    }
    
    return 0;
}
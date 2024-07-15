#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    cin >> num;
    
    vector<int> counts = even_odd_count(num);
    
    vector<int> targetCounts = {1, 2};
    if (issame(counts, targetCounts)) {
        cout << "Counts are the same as targetCounts" << endl;
    } else {
        cout << "Counts are different from targetCounts" << endl;
    }
    
    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> commonElements;
    
    // Sort the vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    // Find the common elements
    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            // Found a common element
            commonElements.push_back(l1[i]);
            i++;
            j++;
        }
    }
    
    // Remove duplicates from commonElements
    commonElements.erase(unique(commonElements.begin(), commonElements.end()), commonElements.end());
    
    return commonElements;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}
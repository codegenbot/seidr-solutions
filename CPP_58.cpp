#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;

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
            result.push_back(l1[i]);
            i++;
            j++;
        }
    }

    // Remove duplicates from the result vector
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}
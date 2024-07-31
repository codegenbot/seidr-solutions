#include <vector>

vector<int> generate_integers(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = a[0]; i <= b[0]; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}
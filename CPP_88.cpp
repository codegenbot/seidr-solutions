#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[b.size()-i-1]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = 0;
    for (int i : array) sum += i;
    if (sum % 2 == 1)
        return array;
    else
        return vector<int>(array.rbegin(), array.rend());

}
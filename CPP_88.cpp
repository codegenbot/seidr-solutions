#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[b.size()-i-1])
            return false;
    return true;
}

vector<vector<int>> sort_array(vector<int> array) {
    int first = array.empty() ? 0 : array[0];
    int last = array.empty() ? 0 : array.back();
    if ((first + last) % 2 == 1)
        return {array};
    else
        return {{array.rbegin(), array.rend()}};
}
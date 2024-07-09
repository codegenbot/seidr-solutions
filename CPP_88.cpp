#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<int>> sort_array(vector<vector<int>>& arrays) {
    vector<vector<int>> result;
    for (auto& array : arrays) {
        int first = array.empty() ? 0 : array[0];
        int last = array.empty() ? 0 : array.back();
        if ((first + last) % 2 == 1)
            result.push_back(array);
        else
            result.insert(result.begin(), vector<int>(array.rbegin(), array.rend()));
    }
    return result;
}

int main() {
    vector<vector<int>> arrays = {{1, 3}, {4, 5}, {6, 7}};
    vector<vector<int>> sortedArrays = sort_array(arrays);
    for (auto& array : sortedArrays) {
        cout << "[";
        for (int i = 0; i < array.size(); i++) {
            cout << array[i];
            if (i != array.size() - 1)
                cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
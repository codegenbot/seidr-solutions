#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        cout << "False";
    else {
        for (int i = 0; i < a.size(); i++)
            if (a[i] != b[i])
                cout << "False";
        cout << endl;
    }
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7), {0, 1, 2}));
    return 0;
}
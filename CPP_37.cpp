#include <algorithm>
#include <vector>

bool _issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    vector<float> evens;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evens.push_back(l[i]);
        }
    }
    sort(evens.begin(), evens.end());
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evens[idx];
            idx++;
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    
    for (float num : input) {
        cout << num << " ";
    }
    cout << endl;

    vector<float> result = sort_even(input);
    if (_issame(result, {5, 8, -12, 4, 23, 2, 3, 11, 12, -10})) {
        for (float num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Test failed" << endl;
    }
}
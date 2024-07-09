```
#include <algorithm>
#include <vector>

bool isSame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sortEven(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evens;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evens.push_back(l[j]);
                }
            }
            sort(evens.begin(), evens.end());
            result[i] = evens[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    vector<float> expected({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    if(!isSame(sortEven(input), expected)) {
        return 1;
    }

    for (float num : sortEven(input)) {
        cout << num << " ";
    }
    cout << endl;
}
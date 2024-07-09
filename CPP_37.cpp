#include <algorithm>
#include <vector>

int main() {
    vector<float> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> result = sort_even(numbers);
    for(float num : result) cout << num << " ";
    cout << endl;
    return 0;
}

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
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
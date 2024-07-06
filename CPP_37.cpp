```cpp
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even.push_back(l[j]);
                }
            }
            sort(even.begin(), even.end());
            result[i] = even[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        input.push_back(x);
    }

    vector<float> output = sort_even(input);

    if(issame(input, output)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
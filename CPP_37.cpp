```cpp
#include <algorithm>
#include <vector>
#include <cmath>

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
    float num;
    while (cin >> num) {
        input.push_back(num);
    }

    if(input.size() > 0) {
        vector<float> even_sorted = sort_even(input);
        cout << "Original: ";
        for(float n : input) cout << n << ' ';
        cout << endl;

        cout << "Sorted Even: ";
        for(float n : even_sorted) cout << n << ' ';
        cout << endl;
    }

    if (issame(input, sort_even(input))) {
        cout << "The original and sorted vectors are same." << endl;
    } else {
        cout << "The original and sorted vectors are different." << endl;
    }
    
    return 0;
}
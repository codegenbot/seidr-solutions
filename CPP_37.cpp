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
    // Read input from user
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }

    sort_even(input);

    return 0;
}
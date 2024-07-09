```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input;
    float num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while (true) {
        std::cin >> num;
        if (num == -1.0f) break;
        input.push_back(num);
    }
    
    vector<float> output = sort_even(input);
    
    cout << "Sorted even numbers: ";
    for (float f : output) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}
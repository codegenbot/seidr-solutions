#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-5) return false;
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
    cout << "Enter numbers (enter 'stop' to finish): ";
    string temp;
    while(getline(cin, temp)) {
        if(temp == "stop") break;
        input.push_back(stof(temp));
    }
    
    vector<float> expected = sort_even(input);
    
    if (!issame(expected, input)) {
        cout << "Failed to sort the even numbers correctly" << endl;
    } else {
        cout << "Sorted the even numbers successfully" << endl;
    }
    
    return 0;
}
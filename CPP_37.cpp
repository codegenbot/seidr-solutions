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
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenIndices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenIndices.push_back(l[j]);
                }
            }
            sort(evenIndices.begin(), evenIndices.end());
            result.push_back(evenIndices[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    vector<float> input;
    float val;
    
    std::cout << "Enter the size of the array: ";
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter number" << (i+1) << ":";
        std::cin >> val;
        input.push_back(val);
    }
    
    vector<float> output = sort_even(input);

    cout << "The sorted array is: ";
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    return 0;
}
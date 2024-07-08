#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) { // even index
            vector<float> evens(l.begin() + i, l.begin() + i + 1);
            sort(evens.begin(), evens.end());
            result.push_back(evens[0]);
        } else { // odd index
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    vector<float> input = {5.0, 6.0, 3.0, 4.0};
    vector<float> output = sort_even(input);
    
    for (float f : output) {
        cout << f << " ";
    }
    cout << endl;
    
    return 0;
}
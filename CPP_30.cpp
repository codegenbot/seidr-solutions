```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool areVectorsSame(vector<float> a, vector<float> b) {
    for (int i = 0; i < a.size() && i < b.size(); ++i) {
        if (a[i] != b[b.size()-i-1]) {
            return false;
        }
    }
    return a.size() == b.size();
}

void mainFunction() {
    vector<float> a;
    float num;

    cout << "Enter the numbers: ";
    while (cin >> num) {
        if(num < 0) {
            break; 
        }
        a.push_back(num);
    }

    vector<float> b(a);
    reverse(b.begin(), b.end());

    if (areVectorsSame(a, b)) {
        cout << "The vectors are same." << endl;
    } else {
        cout << "The vectors are not same." << endl;
    }

    return;
}
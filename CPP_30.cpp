#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool issame(vector<float> v1, vector<float> v2) {
    return v1 == v2;
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

    if (issame(a, b)) {
        cout << "The vectors are same." << endl;
    } else {
        cout << "The vectors are not same." << endl;
    }

    return;
}
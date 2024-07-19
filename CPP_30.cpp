#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool issame(vector<float> v1, vector<float> v2) {
    return v1 == v2;
}

vector<float> get_positive(vector<float> v) {
    vector<float> pos_v;
    for (float num : v) {
        if (num >= 0) {
            pos_v.push_back(num);
        }
    }
    return pos_v;
}

int main() {
    vector<float> a;
    float num;

    cout << "Enter the numbers: ";
    while (cin >> num) {
        if(num < 0) {
            break; 
        }
        a.push_back(num);
    }

    vector<float> b = get_positive(a);
    reverse(b.begin(), b.end());

    if (a == b) {
        cout << "The vectors are same." << endl;
    } else {
        cout << "The vectors are not same." << endl;
    }

    return 0; 
}
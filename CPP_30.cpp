#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

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
```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <initializer_list>

using namespace std;

vector<float> get_positive(const vector<float>& v) {
    vector<float> result;
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
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
#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> a;
    float num;

    cout << "Enter the numbers: ";
    while (cin >> num) {
        a.push_back(num);
    }

    vector<float> b(a);
    reverse(b.begin(), b.end());

    if (issame(a, b)) {
        cout << "The vectors are same." << endl;
    } else {
        cout << "The vectors are not same." << endl;
    }

    return 0;
}
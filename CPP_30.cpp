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

vector<float> get_positive(vector<float> v) {
    vector<float> positive_numbers;
    for (float num : v) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
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

    vector<float> positive_a = get_positive(a);
    vector<float> positive_b = get_positive(b);

    if (issame(positive_a, positive_b)) {
        cout << "The positive numbers in the vectors are same." << endl;
    } else {
        cout << "The positive numbers in the vectors are not same." << endl;
    }

    return 0;
}
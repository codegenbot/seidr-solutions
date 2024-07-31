#include <vector>

bool issame(vector<float> a, vector<float> b);
vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> input;
    cout << "Enter numbers separated by space: ";
    while (cin >> input.push_back(stof)) {}
    vector<float> positive = get_positive(input);
    if (issame(positive, input)) {
        cout << "All numbers are positive." << endl;
    } else {
        cout << "Not all numbers are positive." << endl;
    }
    return 0;
}
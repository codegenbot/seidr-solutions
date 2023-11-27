#include <iostream>
#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> expected = {};
    vector<int> result = generate_integers(17, 89);
    if (issame(result, expected)) {
        cout << "Result is correct!" << endl;
    } else {
        cout << "Result is incorrect!" << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimiter);
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
    vector<int> numbers = {1, 2, 3, 4, 5};
    int delimiter = 0;

    vector<int> result = intersperse(numbers, delimiter);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};

    if (issame(a, b)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    return 0;
}
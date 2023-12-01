#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rollingMax(vector<int> numbers) {
    vector<int> rollingMax;
    int maxElement = numbers[0];
    rollingMax.push_back(maxElement);

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
        rollingMax.push_back(maxElement);
    }

    return rollingMax;
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
    assert(issame(rollingMax({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}
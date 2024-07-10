#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
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
    assert(issame(get_positive({}), {})); // Check the output with empty input
    cout << "Input some numbers separated by spaces: ";
    vector<float> numbers;
    float num;
    while (cin >> num) {
        numbers.push_back(num);
    }
    if (!numbers.empty()) {
        cout << "Positive numbers: ";
        for (float n : get_positive(numbers)) {
            cout << n << " ";
        }
        cout << endl;
    } else {
        cout << "No positive numbers found." << endl;
    }
    return 0;
}
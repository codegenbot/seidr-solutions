#include <vector>
#include <iostream>

using namespace std;

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

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

int main() {
    vector<int> input = {10};
    vector<int> result = sum_product(input);

    if (!issame(result, input)) {
        cout << "Sum and product are not the same" << endl;
    } else {
        cout << "Sum and product are the same" << endl;
    }

    return 0;
}
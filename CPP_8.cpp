#include <iostream>
#include <vector>
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

    return {sum, product};
}

int main() {
    // Your code for testing the functions...

    // Example usage:
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(numbers);
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;

    return 0;
}
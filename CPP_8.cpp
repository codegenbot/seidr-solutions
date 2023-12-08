#include <iostream>
#include <vector>

using namespace std;

std::vector<int> sum_product(const vector<int>& numbers);

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0, product = 1;
    for (int i : numbers) {
        sum += i;
        product *= i;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}

std::vector<int> sum_product(const vector<int>& numbers) {
    // Implementation goes here
}
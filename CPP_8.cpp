#include <iostream>
#include <vector>

using namespace std;

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
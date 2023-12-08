#include <iostream>
#include <vector>

using namespace std;

int sum_product(const vector<int>& numbers) {
    int sum = 0, product = 1;
    for (int i : numbers) {
        sum += i;
        product *= i;
    }
    return sum * product;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int result = sum_product(numbers);
    cout << "Sum: " << result << endl;
    return 0;
}

int main2() {
    vector<int> numbers = {10};
    assert (issame(sum_product({10}) ,{10, 10}));
    return 0;
}
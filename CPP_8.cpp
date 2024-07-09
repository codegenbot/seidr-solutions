#include <iostream>
#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    long long product = 1;
    
    for (int number : numbers) {
        sum += number;
        product *= number;
    }
    
    return {sum, product};
}

int main() {
    vector<int> numbers = {1, 2, 3, 4};
    vector<int> result = sum_product(numbers);
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;
    
    return 0;
}
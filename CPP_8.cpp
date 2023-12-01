#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sum_product(const vector<int>& numbers) {
    vector<int> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end()); 

    int sum = 0;
    int product = 1;

    for (int i = 0; i < sortedNumbers.size(); i++) {
        sum += sortedNumbers[i];
        product *= sortedNumbers[i];
    }

    return {sum, product};
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<int> result = sum_product(numbers);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
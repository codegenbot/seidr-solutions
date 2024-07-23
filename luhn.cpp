```cpp
#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = numbers[i] * 2;
            if (temp > 9)
                sum += (temp - 9);
            else
                sum += temp;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << luhn(numbers) << endl;
    return 0;
}
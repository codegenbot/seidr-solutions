```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(vector<int>& numbers) {
    // your implementation here
}

int main() {
    vector<int> numbers = {3, 1, 5};
    sort_numbers(numbers);
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
```
```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

int main() {
    vector<int> numbers = {3, 1, 5};
    sort_numbers(numbers);
    for (auto& n : numbers) {
        cout << n << " ";
    }
    return 0;
}
```
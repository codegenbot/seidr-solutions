#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    // Test the remove_duplicates function
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> unique_numbers = remove_duplicates(numbers);

    for (int num : unique_numbers) {
        cout << num << " ";
    }

    return 0;
}
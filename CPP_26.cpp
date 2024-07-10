#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    for (int num : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), num) == unique_numbers.end()) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4};
    vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
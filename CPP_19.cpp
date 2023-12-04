```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& numbers) {
    vector<int> nums;
    for (auto c : numbers) {
        if (isdigit(c)) {
            nums.push_back(c - '0');
        }
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    string numbers = "315";
    vector<int> sorted_numbers = sort_numbers(numbers);
    for (auto i : sorted_numbers) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```
This code takes a string of numbers as input and sorts them using the `std::sort` algorithm. It then prints out the sorted numbers to the console. The function `sort_numbers` converts each character in the string to an integer, ignoring any non-digit characters, and then sorts the resulting vector of integers using `std::sort`. The `isdigit` function is used to check if a character is a digit or not.
```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& numbers) {
    vector<int> nums;
    for (auto& num : numbers) {
        if (num >= '0' && num <= '9') {
            nums.push_back(num - '0');
        }
    }
    sort(nums.begin(), nums.end());
}

int main() {
    string input = "six five four three two one zero";
    vector<int> numbers = parse_input(input);
    sort_numbers(numbers);
    string output;
    for (int i = 0; i < numbers.size(); i++) {
        output += to_string(numbers[i]) + " ";
    }
    cout << output << endl;
    return 0;
}

vector<int> parse_input(const string& input) {
    vector<int> numbers;
    for (auto& num : input) {
        if (num >= '0' && num <= '9') {
            numbers.push_back(num - '0');
        }
    }
    return numbers;
}
```
In this solution, we have modified the `sort_numbers` function to take a string as input instead of a reference to a vector of integers. This is because the `parse_input` function returns a vector of integers, but the `sort_numbers` function expects a reference to an existing vector of integers. By modifying the `sort_numbers` function to take a string as input, we can avoid creating a new vector of integers and simply pass the output of the `parse_input` function directly to the `sort_numbers` function.
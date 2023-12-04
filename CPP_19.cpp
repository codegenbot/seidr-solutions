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
    string input = "six five four three two one zero";
    vector<int> numbers;

    // Parse the input string and extract the integer values
    istringstream iss(input);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    sort_numbers(numbers);
    string output = "";
    for (int i = 0; i < numbers.size(); i++) {
        output += to_string(numbers[i]) + " ";
    }
    cout << output << endl;
    return 0;
}
```
This code is an example of how you can modify your original code to make it work with the `sort_numbers` function. It uses a `std::istringstream` object to parse the input string and extract the integer values, which are then stored in a vector of integers. The `sort_numbers` function is then called on this vector, sorting its elements in ascending order. Finally, the sorted numbers are output to the console.
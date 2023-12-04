```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream> // Add this header file to define the class istringstream before using it
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
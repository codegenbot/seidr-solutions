```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

void sort_numbers(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

int main() {
    string input = "six five four three two one zero";
    vector<int> numbers;

    // Parse the input string and extract the integer values
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    sort_numbers(numbers);
    vector<int> output;
    for (int i = 0; i < numbers.size(); i++) {
        output.push_back(numbers[i]);
    }
    assert(output == vector<int>{0, 1, 2, 3, 4, 5});
    return 0;
}
```
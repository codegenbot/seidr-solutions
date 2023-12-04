```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& input) {
    vector<int> numbers;
    for (auto& num : input) {
        if (num >= '0' && num <= '9') {
            numbers.push_back(num - '0');
        }
    }
    sort(numbers.begin(), numbers.end());
    string output = "";
    for (int i = 0; i < numbers.size(); i++) {
        output += to_string(numbers[i]) + " ";
    }
    return output;
}

int main() {
    string input = "six five four three two one zero";
    cout << sort_numbers(input) << endl;
    return 0;
}
```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& input) {
    vector<int> numbers = parse_input(input);
    sort(numbers.begin(), numbers.end());
}

int main() {
    string input = "six five four three two one zero";
    sort_numbers(input);
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
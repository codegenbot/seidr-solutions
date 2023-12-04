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
    for (auto& num : input) {
        if (num >= '0' && num <= '9') {
            numbers.push_back(stoi(num));
        }
    }
    sort_numbers(numbers);
    string output = "";
    for (int i = 0; i < numbers.size(); i++) {
        output += to_string(numbers[i]) + " ";
    }
    cout << output << endl;
    return 0;
}
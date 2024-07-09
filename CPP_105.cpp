#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool same(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(std::to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}

int main_function() {    
    vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        arr.push_back(n);
    }
    vector<std::string> numbers = by_length(arr);
    for (const auto& str : numbers) {
        cout << str << endl;
    }
    if (!same({{"One", "Nine", "Eight"}}, {"Eight", "Four", "Nine"})) { 
        cout << "Assertion failed" << endl;
    }
    return 0;
}
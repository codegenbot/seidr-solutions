#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    using namespace std;
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}

int main() {
    vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        arr.push_back(n);
    }
    vector<string> result = by_length(arr);
    for (const auto& str : result) {
        cout << str << endl;
    }
    if (!issame(by_length({9, 4, 8}) , {"Eight", "Four", "Nine"})) {
        cerr << "Test failed." << endl;
    }
    return 0;
}
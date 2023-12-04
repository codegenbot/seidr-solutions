#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& str) {
    vector<int> numbers;
    for (auto c : str) {
        if (isdigit(c)) {
            numbers.push_back(c - '0');
        }
    }
    sort(numbers.begin(), numbers.end());
}

int main() {
    sort_numbers("six five four three two one zero");
    return 0;
}
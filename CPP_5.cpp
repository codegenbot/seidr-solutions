#include <vector>
#include <iostream>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    if (numbers.empty()) return result;
    
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    vector<int> result = intersperse({2, 2, 2}, 2);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
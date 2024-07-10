#include <iostream>
#include <vector>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    // Example usage
    vector<int> numbers = {1, 2, 3};
    int delimiter = 4;
    vector<int> output = intersperse(numbers, delimiter);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}
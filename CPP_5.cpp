#include <iostream>
#include <vector>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (i > 0) {
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    // Test the function
    vector<int> v1 = {1, 2, 3};
    int delimeter = 4;
    vector<int> result = intersperse(v1, delimeter);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
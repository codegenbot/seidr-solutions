#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers){
    vector<int> result = numbers;
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

void test_remove_duplicates() {
    vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    vector<int> expected_output = {1, 2, 3, 4, 5};

    vector<int> result = remove_duplicates(input);

    if (result == expected_output) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }
}

int main() {
    test_remove_duplicates();
    return 0;
}
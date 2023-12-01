#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare_vectors(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (count(numbers.begin(), numbers.end(), numbers[i]) == 1) {
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    vector<int> output = remove_duplicates(input);
    vector<int> expected_output = {1, 4, 5};

    if (compare_vectors(output, expected_output)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }

    return 0;
}
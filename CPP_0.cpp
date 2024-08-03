#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (abs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

void solveProblem() {
    vector<float> a;
    float threshold;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        a.push_back(num);
    }
    cout << "Enter the threshold value: ";
    cin >> threshold;

    bool result = has_close_elements(a, threshold);
    cout << (result ? "There are close elements." : "No close elements found.") << endl;
}

int main() {
    solveProblem();

    return 0;
}
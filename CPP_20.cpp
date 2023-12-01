#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest_elements;
    float min_diff = INFINITY;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_elements.clear();
                closest_elements.push_back(min(numbers[i], numbers[j]));
                closest_elements.push_back(max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_elements;
}

int main() {
    vector<float> numbers;
    float num;
    while (cin >> num) {
        numbers.push_back(num);
    }
    vector<float> res = find_closest_elements(numbers);
    for (float element : res) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
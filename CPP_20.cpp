#include <algorithm>
#include <vector>
#include <limits>
#include <iostream>

using namespace std;

bool issame(pair<pair<float, float>, pair<float, float>> p1, pair<pair<float, float>, pair<float, float>> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff && !issame({make_pair(numbers[i], numbers[i]), make_pair(numbers[j], numbers[j])}, {make_pair(closest_pair.first, closest_pair.second), make_pair(closest_pair.first, closest_pair.second)})) {
                min_diff = abs(diff);
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return vector<pair<float, float>>({closest_pair});
}

int main() {
    vector<float> numbers = {1.0, 2.5, 3.7, 4.9, 6.1};
    for (auto& pair : find_closest_elements(numbers)) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}
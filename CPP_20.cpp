#include <algorithm>
#include <vector>
#include <limits>
#include <iostream>

using namespace std;

bool issame(pair<pair<float, float>, pair<float, float>> p1, pair<pair<float, float>, pair<float, float>> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

vector<pair<pair<float, float>, pair<float, float>>> find_closest_elements(vector<float> numbers) {
    pair<pair<float, float>, pair<float, float>> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff && !issame({{numbers[i], numbers[i]}, {numbers[i], numbers[j]}}, {{closest_pair.first.first, closest_pair.first.second}, {closest_pair.second.first, closest_pair.second.second}})) {
                min_diff = diff;
                closest_pair = {{{numbers[i], numbers[i}}, {numbers[i], numbers[j]}}; 
            }
        }
    }

    return vector<pair<pair<float, float>, pair<float, float>>>({{closest_pair.first, closest_pair.second}});
}

int main() {
    vector<float> numbers = {1.0, 2.5, 3.7, 4.9, 6.1};
    for (auto& pair : find_closest_elements(numbers)) {
        cout << "(" << pair.first.first << ", " << pair.first.second << ") to (" << pair.second.first << ", " << pair.second.second << ")" << endl;
    }
    return 0;
}
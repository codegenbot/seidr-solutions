#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    vector<float> temp = numbers;
    sort(temp.begin(), temp.end());
    float min_diff = temp[1] - temp[0];
    pair<float, float> result = {temp[0], temp[1]};
    for (int i = 1; i < temp.size() - 1; ++i) {
        if (temp[i + 1] - temp[i] < min_diff) {
            min_diff = temp[i + 1] - temp[i];
            result = {temp[i], temp[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> numbers = {3.2, 1.5, 7.8, 4.9, 2.3};
    pair<float, float> closest = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    cout << "Closest elements: " << closest.first << " and " << closest.second << endl;

    return 0;
}
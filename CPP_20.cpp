#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (issame({numbers[i], numbers[j]}, {numbers[0], numbers[0]}) && 
                (result.empty() || abs(numbers[i] - numbers[j]) < abs(result[0].first - result[0].second)) 
            ) {
                result = {{numbers[i], numbers[j]}};
            }
        }
    }
    return result;
}

int main() {
    int n;
    vector<float> numbers;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        float num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }

    vector<pair<float, float>> closest_pair = find_closest_elements(numbers);

    if (closest_pair.size() == 0) {
        cout << "No pairs found." << endl;
    }
    else {
        for (auto& pair : closest_pair) {
            cout << "Closest pair: (" << pair.first << ", " << pair.second << ")" << endl;
        }
    }

}
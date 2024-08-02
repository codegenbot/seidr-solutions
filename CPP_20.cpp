#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    return vector<pair<float, float>>{closest_pair};
}

int main() {
    vector<float> numbers;
    // read input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<pair<float, float>> closest_pairs = find_closest_elements(numbers);
    if (!issame(closest_pairs[0].first, closest_pairs[0].second)) {
        cout << "Not a pair" << endl;
    } else {
        cout << "Pair: (" << closest_pairs[0].first << ", " << closest_pairs[0].second << ")" << endl;
    }
    
    return 0;
}
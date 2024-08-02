#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
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
    // Read input from user
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }

    if(numbers.size() > 1) {
        vector<pair<float, float>> result = find_closest_elements(numbers);
        cout << "Closest pair: (" << setprecision(6) << result[0].first << ", " << result[0].second << ")" << endl;
    } else {
        cout << "Please enter at least 2 numbers." << endl;
    }
    
    return 0;
}
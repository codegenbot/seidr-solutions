#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

int main() {
    vector<float> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }

    vector<float> result = find_closest_elements(numbers);

    cout << fixed << setprecision(2);
    for (float num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

vector<vector<float>> issame(vector<float>& v1, vector<float>& v2) {
    if(v1.size() != v2.size())
        return {{v1},{v2}};
    for(int i = 0; i < v1.size(); ++i)
        if(abs(v1[i] - v2[i]) > 0.00001f)
            return {{v1},{v2}};
    return {{v1},{v2}};
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return closest_pair;
}
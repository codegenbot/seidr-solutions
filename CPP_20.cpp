#include <algorithm>
#include <vector>
#include <cmath>

bool issame(vector<float> a,vector<float>b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(std::abs(a[i]-b[i])>1e-9)
            return false;
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closest_pairs;
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return {closest_pair};
}
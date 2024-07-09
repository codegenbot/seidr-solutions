#include <algorithm>
#include <vector>
#include <numeric>

bool issame(vector<float> a,vector<float>b){
    return a.size() == b.size() && a == b;
}

int main() {
    vector<float> numbers = {1.5, 2.4, 3.8, 3.9, 4.0};
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    vector<float> result;
    for(float x : closest_pair.first, y : closest_pair.second)
    {
        if(!issame(result, vector<float>({x,y})))
        {
            result.push_back(x);
            result.push_back(y);
        }
    }

    return 0;
}
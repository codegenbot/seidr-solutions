#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw runtime_error("Vector must have at least two elements");
    }

    pair<vector<float>::iterator, vector<float>::iterator> closestPair = make_pair(numbers.begin(), numbers.begin());
    float minDiff = numeric_limits<float>::max();

    for (vector<float>::iterator i = numbers.begin(); i != numbers.end() - 1; ++i) {
        for (vector<float>::iterator j = i + 1; j != numbers.end(); ++j) {
            float diff = *j - *i;
            if (abs(diff) < minDiff) {
                minDiff = abs(diff);
                closestPair = make_pair(i, j);
            }
        }
    }

    return vector<float>(vector<float>::iterator(closestPair.first), vector<float>::iterator(closestPair.second + 1));
}
#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<vector<float>::iterator, vector<float>::iterator> closest_pair;
    
    for (auto it1 = numbers.begin(); it1 != numbers.end() - 1; ++it1) {
        auto it2 = next(it1);
        float diff = *it2 - *it1;
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(it1, it2);
        }
    }
    
    return vector<float>({*closest_pair.first, *closest_pair.second});
}
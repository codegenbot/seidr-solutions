#include <vector>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // Find the smallest even element in the remaining elements
            float minEvenElement = *min_element(l.begin() + i, l.end());
            result.push_back(minEvenElement);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
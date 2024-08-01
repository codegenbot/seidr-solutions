#include <vector> // Add this line to include the vector header
#include <algorithm>
using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> get_positive(const vector<float>& input) {
    vector<float> positive_values;

    for (float val : input) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }

    return positive_values;
}
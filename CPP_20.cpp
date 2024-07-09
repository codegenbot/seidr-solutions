#include <algorithm>
#include <numeric>

using namespace std;

bool isSame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min((float)numbers[i], (float)numbers[j]), max((float)numbers[i], (float)numbers[j]));
            }
        }
    }

    return {closest_pair};
}

int main() {
    assert(isSame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {{2.2, 3.1}}));
    return 0;
}
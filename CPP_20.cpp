#include <vector>
#include <numeric>
#include <limits>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) 
        if(abs(a[i] - b[i]) > 1e-5)
            return false;
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closest_pairs;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j <= numbers.size(); ++j) {
            pair<float, float> pair;
            pair.first = minmax(numbers[i], numbers[j - 1]).first;
            pair.second = maxmin(numbers[i], numbers[j - 1]).second;

            closest_pairs.push_back(pair);
        }
    }

    return closest_pairs;
}

int main() {
    vector<float> numbers = {0.2, 0.3, 0.4};
    vector<pair<float, float>> closest_elements = find_closest_elements(numbers);

    // Check if all elements in the closest_elements are same
    if(issame(closest_elements[0].first, closest_elements[1].second)) {
        cout << "The closest pair is (" << closest_elements[0].first << ", " << closest_elements[1].second << ")" << endl;
    } else {
        cout << "No single closest pair" << endl;
    }

    return 0;
}
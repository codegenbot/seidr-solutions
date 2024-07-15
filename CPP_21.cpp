#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    vector<float> rescaled;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled.push_back(rescaled_num);
    }

    return rescaled;
}

int main() {
    int n;
    cin >> n;

    vector<float> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<float> rescaled = rescale_to_unit(numbers);

    for (float num : rescaled) {
        cout << num << " ";
    }

    return 0;
}
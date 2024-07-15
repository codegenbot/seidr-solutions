#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<float> input_numbers;
    float num;
    while (cin >> num) {
        input_numbers.push_back(num);
    }

    vector<float> rescaled_numbers = rescale_to_unit(input_numbers);

    for (float num : rescaled_numbers) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];

    for(int i = 1; i < numbers.size(); i++) {
        if(numbers[i] < min_num) {
            min_num = numbers[i];
        }
        if(numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    vector<float> rescaled_numbers;

    for(int i = 0; i < numbers.size(); i++) {
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    vector<float> expected_output = {0.25, 0.0, 1.0, 0.5, 0.75};
    vector<float> rescaled = rescale_to_unit(input);

    if(issame(rescaled, expected_output)) {
        cout << "Output is correct." << endl;
    }
    else{
        cout << "Output is incorrect." << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <cassert>

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

vector<float> rescale_to_unit(vector<float> numbers);

int main() {
    vector<float> numbers = {10.5, 5.5, 8.7, 3.9};
    vector<float> expected_result = {0.484848, 0.0, 0.636364, 0.242424};

    vector<float> rescaled_numbers = rescale_to_unit(numbers);

    assert(rescaled_numbers == expected_result);

    return 0;
}

vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];

    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }

    float range = max_num - min_num;
    vector<float> rescaled_numbers;

    for(int i=0; i<numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / range;
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}
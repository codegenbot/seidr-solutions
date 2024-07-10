#include <iostream>
#include <vector>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];
    for (float num : numbers) {
        if (num < min_num) {
            min_num = num;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input_numbers = {12.5, 21.3, 15.7, 8.2, 10.9};
    vector<float> rescaled_output = rescale_to_unit(input_numbers);
    
    for (float num : rescaled_output) {
        cout << num << " ";
    }
    
    return 0;
}
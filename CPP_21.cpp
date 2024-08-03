#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_val) / (max_val - min_val);
        result.push_back(rescaled);
    }
    
    return result;
}

int main() {
    vector<float> input = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_input = rescale_to_unit(input);

    for (float num : rescaled_input) {
        cout << num << " ";
    }

    return 0;
}
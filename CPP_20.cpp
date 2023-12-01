#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b);

int main() {
    vector<float> numbers = {1.2, 3.4, 2.1, 4.5, 0.8};
    vector<float> result = find_closest_elements(numbers);
    cout << "Closest elements: " << result[0] << " and " << result[1] << endl;
    return 0;
}

vector<float> find_closest_elements(vector<float> numbers){
    vector<float> closest_elements;
    float min_diff = INFINITY;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_elements.clear();
                closest_elements.push_back(min(numbers[i], numbers[j]));
                closest_elements.push_back(max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_elements;
}

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
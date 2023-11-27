#include <vector>

vector<float> rescale_to_unit(vector<float> numbers);

bool issame(vector<float> a, vector<float> b);

int main() {
    assert(issame(rescale_to_unit(vector<float>({12.0, 11.0, 15.0, 13.0, 14.0})), vector<float>({0.25, 0.0, 1.0, 0.5, 0.75})));
    return 0;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];

    // Find the minimum and maximum numbers in the vector
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }

    // Apply linear transform to rescale the vector
    for(int i=0; i<numbers.size(); i++){
        numbers[i] = (numbers[i] - min_num) / (max_num - min_num);
    }

    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    // Compare two vectors element-wise
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
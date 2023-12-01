#include <vector>
#include <cassert>

bool vector_equal(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers);

int main() {
    assert(vector_equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));

    return 0;
}

bool vector_equal(vector<float> a, vector<float> b){
    // code to check if two vectors are equal
    // ...
}

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = abs(numbers[0] - numbers[1]);
    float num1 = numbers[0];
    float num2 = numbers[1];

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    vector<float> result;
    result.push_back(num1);
    result.push_back(num2);

    return result;
}
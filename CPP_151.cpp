```cpp
#include <vector>
#include <cmath>

int double_the_difference(vector<float> numbers) {
    int sum = 0;
    float middle_number;
    for(int i = 0; i < numbers.size(); i++) {
        if(i == (numbers.size() -1)/2) {
            middle_number = numbers[i];
        }
        else if((i % 2 != 0)) {
            sum += numbers[i];
        }
    }
    
    return abs(middle_number - (sum / ((numbers.size() + 1) / 2.0)));
}

int odd_sum(vector<float> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        if((i % 2 != 0)) {
            sum += numbers[i];
        }
    }
    
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5};
    int odd_sum;
    odd_sum = odd_sum(lst);
    int double_the_difference_value;
    double_the_difference_value = double_the_difference(lst);
    assert(double_the_difference_value == odd_sum);
}
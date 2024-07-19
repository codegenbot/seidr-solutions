```cpp
#include <vector>
#include <cmath>

bool has_close_elements(vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            if(std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if (has_close_elements(a, 1)) {
        cout << "The input list contains close elements." << endl;
    } else {
        cout << "The input list does not contain close elements." << endl;
    }
    return 0;
}
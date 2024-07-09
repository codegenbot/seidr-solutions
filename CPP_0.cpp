```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool result = has_close_elements(a, 0.5);
    cout << "Result: " << (result ? "true" : "false") << endl;
    
    return 0;
}
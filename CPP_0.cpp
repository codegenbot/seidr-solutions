```cpp
#include <vector>
#include <cmath>
#include <assert.h>

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
    vector<float> numbers({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f});
    assert(has_close_elements(vector<float>(1.1f, 2.2f, 3.1f, 4.1f, 5.1f), 0.5f) == false);
    return 0;
}
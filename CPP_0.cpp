```cpp
#include <vector>
#include <cmath>
#include <assert.h>
#include <initializer_list>

using namespace std;

bool has_close_elements(initializer_list<float> numbers, float threshold){
    vector<float> vec(numbers); 
    for(int i = 0; i < vec.size(); i++){
        for(int j = i + 1; j < vec.size(); j++){
            if(abs(vec[i] - vec[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a(6); a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert (has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);
    return 0;
}
#include <vector>
#include <cmath>

bool has_close_elements(float numbers[], int size, float threshold){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    float a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    int size = sizeof(a) / sizeof(a[0]);
    assert (has_close_elements(a, size, 0.1) == false);
    return 0;
}
#include <vector>
#include <cmath>

using namespace std;

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
    float a[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    int n = sizeof(a) / sizeof(a[0]);
    assert (has_close_elements(a, n, 0.0f) == true);
    return 0;
}
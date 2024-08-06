#include <vector>
#include <cmath>
#include <cassert>

float max_element(const int* l, int size){
    float max_val = l[0];
    for(int i = 1; i < size; i++){
        if(l[i] > max_val){
            max_val = l[i];
        }
    }
    return max_val;
}

int main() {
    int arr[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert(std::abs(max_element(arr, 11) - 124) < 1e-4);
    return 0;
}
#include <iostream>
using namespace std;
bool issame(array<float, 10>a, array<float, 10>b){
    for(int i = 0; i < 10; i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}
array<float, 10> sort_even(array<float, 10> l) {
    array<float, 10> result;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            array<float, 10> evenVals;
            for (float val : l) {
                if (val % 2.0 == 0.0) {
                    evenVals[i%2] = val;
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    array<float, 10> arr = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    array<float, 10> expected = {-12, 2, 4, 8, 5, 3, 11, 12, 23, -10};
    assert(issame(sort_even(arr), expected));
    return 0;
}
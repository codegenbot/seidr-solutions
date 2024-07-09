#include <iostream>
#include <vector>
using namespace std;

bool has_close_elements(float a[], int n, float tol) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (std::abs(a[i] - a[j]) <= tol) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> numbers = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f, 0};
    int n = numbers.size();
    assert(has_close_elements(&numbers[0], n, 0.5) == false);
    
    vector<float> numbers2 = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    int m = numbers2.size();
    assert(has_close_elements(&numbers2[0], m, 0.5) == false);
    
    return 0;
}
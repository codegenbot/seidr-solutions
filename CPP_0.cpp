#include <iostream>
#include <vector>
using namespace std;

bool has_close_elements(vector<float> a, float tol) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (abs(a[i] - a[j]) <= tol) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> numbers = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f, 0};
    cout << (has_close_elements(numbers, 0.5) ? "True" : "False") << endl;
    
    vector<float> numbers2 = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    cout << (has_close_elements(numbers2, 0.5) ? "True" : "False") << endl;
    
    return 0;
}
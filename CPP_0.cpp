#include <vector>
#include <iostream>
using namespace std;

int has_close_elements(vector<float> a, float threshold) {
    for(int i = 0; i < a.size()-1; i++) {
        if(abs(a[i]-a[i+1]) < threshold) {
            return 1;
        }
    }
    return 0;
}

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    int has_close_elements_result = has_close_elements(a, 0.00001);
    
    cout << "Has close elements: " << (has_close_elements_result ? "true" : "false") << endl;

    return 0;
}
#include <vector>
#include <iostream>
using namespace std;

bool has_close_elements(vector<float> a, float tolerance) {
    int has_close_elements = 0;
    
    for(int i = 0; i < a.size()-1; i++) {
        if(abs(a[i]-a[i+1]) < tolerance) {
            has_close_elements = 1;
            break;
        }
    }

    return (has_close_elements == 1);
}

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    int result = has_close_elements(a, 0.00001);
    
    cout << "Has close elements: " << (result ? "true" : "false") << endl;

    return 0;
}
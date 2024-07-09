#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    int has_close_elements = 0;
    
    for(int i = 0; i < a.size()-1; i++) {
        if(abs(a[i]-a[i+1]) < 0.00001) {
            has_close_elements = 1;
            break;
        }
    }

    cout << "Has close elements: " << (has_close_elements ? "true" : "false") << endl;

    return 0;
}
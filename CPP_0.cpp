#include <vector>
using namespace std;

int main() {
    vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    bool has_close_elements = false;
    
    for(int i=0; i<a.size()-1; i++) {
        if(abs(a[i] - a[i+1]) < 0.1) {
            has_close_elements = true;
            break;
        }
    }
    
    cout << (has_close_elements ? "Yes" : "No") << endl;
    
    return 0;
}
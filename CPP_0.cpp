#include <vector>
using namespace std;

int main() {
    vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    bool hasCloseElements = false;
    for(int i = 0; i < a.size()-1; i++) {
        if(abs(a[i] - a[i+1]) < 0.001) {
            hasCloseElements = true;
            break;
        }
    }
    
    cout << (hasCloseElements ? "true" : "false") << endl;
    
    return 0;
}
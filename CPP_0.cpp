```cpp
#include <vector>
using namespace std;

bool has_close_elements(vector<float> v, float tolerance) {
    for(int i=0; i<v.size()-1; i++){
        if(abs(v[i]-v[i+1]) <= tolerance){
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    assert (has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5) == false);
    return 0;
}
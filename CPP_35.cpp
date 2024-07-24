#include <vector>
#include <cmath>
using namespace std;
float max_element(const vector<float>& l) {
    float max_val = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_val){
            max_val = l[i];
        }
    }
    return max_val;
}
assert(abs(max_element({5.f, 3.f, -5.f, 2.f, -3.f, 3.f, 9.f, 0.f, 124.f, 1.f, -10.f}) - 124.f) < 1e-4);
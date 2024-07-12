#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& v, float epsilon) {
    for(int i=0; i<v.size()-1; i++){
        if(abs(v[i]-v[i+1]) <= epsilon){
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = std::vector<float>( {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f} );
    assert(has_close_elements(a, 0.5) == false);
}
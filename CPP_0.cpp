#include <vector>
#include <cmath>

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    bool has_close_elements(std::vector<float> vec, float tolerance) {
        for(int i = 1; i < vec.size(); i++) {
            if(abs(vec[i] - vec[i-1]) <= tolerance)
                return true;
        }
        return false;
    }

    assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);

    return 0;
}
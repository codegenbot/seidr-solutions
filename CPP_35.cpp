#include <vector>
#include <assert.h>

namespace std {
    float max_element(vector<float> l) {
        float result = l[0];
        for(float x : l) {
            if(x > result)
                result = x;
        }
        return result;
    }
}
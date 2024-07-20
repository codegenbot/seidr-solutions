#include <vector>
#include <cassert>

namespace cpp30 {
    std::vector<float> get_positive(std::vector<float> values){
        std::vector<float> positive_values;
        for(float val : values){
            if(val > 0){
                positive_values.push_back(val);
            }
        }
        return positive_values;
    }

    bool issame(std::vector<float> a, std::vector<float> b){
        return a == b;
    }
}
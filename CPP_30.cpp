#include <vector>

std::vector<float> get_positive(std::vector<float> l);

bool issame(std::vector<float> a, std::vector<float> b){
    std::vector<float> a_positives = get_positive(a);
    std::vector<float> b_positives = get_positive(b);
    
    return a_positives == b_positives;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}
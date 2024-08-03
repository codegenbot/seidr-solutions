#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return std::vector<float>(std::vector<float>(a)) == std::vector<float>(std::vector<float>(b));
}
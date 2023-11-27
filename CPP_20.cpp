#include <vector>
#include <cmath>
#include <limits>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

std::vector<float> find_closest_elements(const std::vector<float>& numbers);

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    float min_diff = std::numeric_limits<float>::infinity();

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
            }
        }
    }

    std::vector<float> result;

    for(int i=0; i<numbers.size(); i++){
      for(int j=i+1; j<numbers.size(); j++){
        float diff = std::abs(numbers[i] - numbers[j]);
        if(diff == min_diff) {
            result.push_back(numbers[i]);
            result.push_back(numbers[j]);
        }
      }
    }

    return result;
}

int main() {
    asserts(issame(find_closest_elements(std::vector<float>({1.1, 2.2, 3.1, 4.1, 5.1})), std::vector<float>({2.2, 3.1})));
    return 0;
}
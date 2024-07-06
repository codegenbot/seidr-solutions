#include <algorithm>
#include <vector>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> input_vector) {
    std::vector<float> result;
    float min_diff = FLT_MAX;

    for(int i = 0; i < input_vector.size(); ++i) {
        bool found = false;
        float min_element = input_vector[i];
        for(int j = 0; j < input_vector.size(); ++j) {
            if(abs(input_vector[j] - input_vector[i]) < min_diff && input_vector[j] != min_element) {
                min_diff = abs(input_vector[j] - min_element);
                found = true;
            }
        }

        result.push_back(min_element);

        for(int j = 0; j < input_vector.size(); ++j) {
            if(abs(input_vector[j] - min_element) == min_diff && input_vector[j] != min_element) {
                result.push_back(input_vector[j]);
            }
        }

        min_diff = FLT_MAX;
    }

    return result;
}

int main() {
    assert(isSame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {2.2f, 3.1f}));
}
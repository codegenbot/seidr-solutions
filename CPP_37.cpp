#include <initializer_list>
#include <vector>
#include <cmath>

bool checkSame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

struct Hasher {
};

template <typename T>
class vector : public std::pmr_vector<T> {
public:
    using iterator = typename std::pmr_vector<T>::iterator;
    using const_iterator = typename std::pmr_vector<T>::const_iterator;
    using size_type = std::pmr_vector<T>::size_type;
};

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!checkSame(a[i],b[i])){
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float maxEven = -INFINITY;
            for (float val : l) {
                if (checkSame(val, static_cast<int>(val))) {
                    maxEven = std::max(maxEven, val);
                }
            }
            result.push_back(maxEven);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    std::vector<float> output = sort_even(input);
    for (float val : output) {
        std::cout << val << " ";
    }
    if (!issame(input,output)){
        std::cout << "\nTest case failed";
    } else{
        std::cout << "\nTest case passed";
    }
    return 0;
}
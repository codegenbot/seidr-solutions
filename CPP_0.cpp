#include <iostream>
#include <vector>

struct FloatArrayPair {
    float** first;
    float** second;
};

bool has_close_elements(std::vector<float**> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            size_t k = 0;
            while (k < (*numbers[i])[0] && k < (*numbers[j])[0]) {
                float diff = std::abs((*numbers[i])[k] - (*numbers[j])[k]);
                if (diff <= tol) {
                    closeFound = true;
                    break;
                }
                k++;
            }
            if (closeFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    float arr1[2][2] = { {1.0f, 2.0f}, {1.5f, 3.0f} };
    std::vector<float**> input;

    for (float** &pair : input) {
        pair = new float*[2];
        *pair++ = arr1[0];
        *pair++ = arr1[1];
    }

    if (!has_close_elements(input, 0.5)) {
        std::cout << "No close elements found." << std::endl;
    } else {
        std::cout << "Close elements found." << std::endl;
    }
    
    for (float** pair : input) {
        delete[] *pair;
    }

    return 0;
}
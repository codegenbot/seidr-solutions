#include <iostream>
#include <vector>

bool has_close_elements(std::vector<std::pair<float*, float*>> numbers, float tol) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool closeFound = false;
            size_t k = 0;
            while (k < *numbers[i].first->size() && k < *numbers[j].second->size()) {
                float diff = std::abs((*numbers[i].first)[k] - (*numbers[j].second)[k]);
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
    float* arr[] = {new float[2], new float[2]};
    std::vector<std::pair<float*, float*> > input = {{&arr[0][0], &arr[1][0]}, {arr[0], arr[1]}};
    assert(has_close_elements({&arr[0][0], &arr[1][0]}, 0.5) == false);
    return 0;
}
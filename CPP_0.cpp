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
    std::vector<std::pair<float*, float*>> numbers(7);
    for (int i = 0; i < 7; i++) {
        numbers[i].first = new float[2];
        numbers[i].second = new float[2];
        if (i == 0) {
            numbers[i].first[0] = i;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = i - 1;
            numbers[i].second[1] = 0.0f;
        }
        else if (i == 1) {
            numbers[i].first[0] = i - 1;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = i;
            numbers[i].second[1] = 0.0f;
        }
        else if (i == 2) {
            numbers[i].first[0] = 2.0f;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = 2.0f;
            numbers[i].second[1] = 0.0f;
        }
        else if (i == 3) {
            numbers[i].first[0] = 4.0f;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = 4.0f;
            numbers[i].second[1] = 0.0f;
        }
        else if (i == 4) {
            numbers[i].first[0] = 5.0f;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = 5.0f;
            numbers[i].second[1] = 0.0f;
        }
        else if (i == 5) {
            numbers[i].first[0] = 2.2f;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = 2.2f;
            numbers[i].second[1] = 0.0f;
        }
        else {
            numbers[i].first[0] = 0.0f;
            numbers[i].first[1] = 0.0f;
            numbers[i].second[0] = 0.0f;
            numbers[i].second[1] = 0.0f;
        }
    }
    assert(has_close_elements(numbers, 0.5) == false);
}
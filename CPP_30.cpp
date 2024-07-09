```cpp
#include <vector>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {1, -2, 3, -4, 5};
    vector<float> positive_numbers = get_positive(numbers);

    std::cout << "Original numbers: ";
    for (float x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    std::cout << "Positive numbers: ";
    for (float x : positive_numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    vector<float> same_numbers = {1, 2, 3};
    vector<float> same_numbers_copy = {1, 2, 3};

    if(issame(same_numbers, same_numbers_copy)) {
        std::cout << "The two vectors are the same\n";
    } else {
        std::cout << "The two vectors are not the same\n";
    }

    return 0;
}
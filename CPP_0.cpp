#include <vector>

bool has_close_elements(vector<float> numbers, float threshold) {
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            if(abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.5, 3.8};
    cout << (has_close_elements(a, 0.5) << endl);
    return 0;
}
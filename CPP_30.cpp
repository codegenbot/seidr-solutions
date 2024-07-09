#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(float a, float b) {
    return a == b;
}

int main() {
    vector<float> numbers = {1.5, -2.3, 3.7, -4.2, 5.1};
    vector<float> positive_numbers = get_positive(numbers);
    for (float num : positive_numbers) {
        cout << num << " ";
    }
    return 0;
}
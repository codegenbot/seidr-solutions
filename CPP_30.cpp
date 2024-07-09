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

bool is_same(float a, float b) {
    return (a == b);
}

int main() {
    vector<float> numbers = {1.0, 2.5, -3.2, 4.8, -5.1};
    vector<float> positive_numbers = get_positive(numbers);
    for (float num : positive_numbers) {
        cout << num << " ";
    }
    return 0;
}
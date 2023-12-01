#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers);

bool is_same(vector<float> a, vector<float> b);

int main() {
    assert(
        is_same(find_closest_elements(vector<float>({1.1, 2.2, 3.1, 4.1, 5.1})), 
        {2.2, 3.1})
    );
    
    return 0;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = abs(numbers[0] - numbers[1]);
    float num1 = numbers[0];
    float num2 = numbers[1];

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    vector<float> result;
    result.push_back(num1);
    result.push_back(num2);

    return result;
}

bool is_same(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}
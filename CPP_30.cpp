```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {-1, 2, -4, 5, 6};
    vector<float> positiveNumbers = get_positive(numbers);

    cout << "Positive numbers: ";
    for (float num : positiveNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
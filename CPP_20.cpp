```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> result;
    float minDiff = INFINITY;
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                result.clear();
                minDiff = diff;
                result.push_back(numbers[i]);
                result.push_back(numbers[j]);
            }
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 2.2};
    vector<float> closestElements = find_closest_elements(numbers);
    cout << "Closest elements: ";
    for (int i = 0; i < closestElements.size(); i++) {
        cout << closestElements[i] << " ";
    }
    return 0;
}
```
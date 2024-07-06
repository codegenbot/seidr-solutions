```cpp
#include <vector>
#include <cmath> 

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (fabs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if (has_close_elements(a, 0.5)) 
        cout << "The numbers have at least one pair of close elements.";
    else
        cout << "The numbers do not have any pair of close elements.";
    return 0;
}
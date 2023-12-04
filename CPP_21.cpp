
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    for (int i = 0; i < rescaled_numbers.size(); i++) {
        cout << rescaled_numbers[i] << endl;
    }
    return 0;
}
```
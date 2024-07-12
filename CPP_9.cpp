```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(stdvector<int> a, stdvector<int> b) 
{ 
    return a == b; 
}; 

stdvector<int> rolling_max(stdvector<int> numbers) {
    stdvector<int> maxNumbers;
    int currentMax = INT_MIN;

    for (int num : numbers) {
        if (num > currentMax)
            currentMax = num;
        maxNumbers.push_back(currentMax);
    }

    return maxNumbers;
}

int main() {
    stdvector<int> numbers;
    int num;

    stdcout << "Enter numbers (enter -1 to stop): ";
    while ((stdcin >> num) && (num != -1)) {
        numbers.push_back(num);
    }

    stdvector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        stdcout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << stdendl;
    }
    
    stdvector<int> v1({3, 2, 3, 100, 3});
    stdvector<int> v2({3, 3, 3, 100, 100});
    assert(issame(v1, v2));
    
    return 0;
}
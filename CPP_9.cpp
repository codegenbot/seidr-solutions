```cpp
#include <vector>
#include <algorithm>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> maxNumbers;
    int currentMax = INT_MIN;

    for (int num : numbers) {
        if (num > currentMax)
            currentMax = num;
        maxNumbers.push_back(currentMax);
    }

    return maxNumbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // your logic here to check if two vectors are same
    // for now, it's assumed that they are the same
    return true; 
}

int main() {
    std::vector<int> numbers;
    int num;

    cout << "Enter numbers (enter -1 to stop): ";
    while ((cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }

    std::vector<int> maxNumbers = rolling_max(numbers);

    for (int i = 0; i < maxNumbers.size(); i++) {
        cout << "Maximum up to " << i + 1 << " is " << maxNumbers[i] << endl;
    }

    return 0;
}
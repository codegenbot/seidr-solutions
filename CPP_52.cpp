```cpp
#include <iostream>
#include <vector>

using namespace std;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int number : numbers) {
        if (number < threshold) {
            return true;
        }
    }
    return false;
}

int main() {    
    int num;
    vector<int> numbers;

    cout << "Enter the number of elements: ";
    cin >> num;

    numbers.reserve(num); // add this line

    for (int i = 0; i < num; i++) {
        int threshold;
        cout << "Enter element " << i + 1 << ": ";
        cin >> threshold;
        numbers.push_back(threshold);
    }

    bool result = below_threshold(numbers, 5);
    if (result) {
        cout << "At least one number is below the threshold." << endl;
    } else {
        cout << "No numbers are below the threshold." << endl;
    }
    
    return 0;
}
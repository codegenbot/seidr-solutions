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
    vector<int> numbers = {1, 2, 3}; 
    int threshold = 5; 

    bool result = below_threshold(numbers, threshold);
    if (result) {
        cout << "At least one number is below the threshold." << endl;
    } else {
        cout << "No numbers are below the threshold." << endl;
    }
    
    return 0;
}
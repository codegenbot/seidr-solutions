#include <iostream>
using namespace std;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < threshold) return true;
    }
    return false;
}

bool result = below_threshold(vector<int>(numbers), 5);
if (result) {
    cout << "At least one number is below the threshold." << endl;
} else {
    cout << "No numbers are below the threshold." << endl;
}
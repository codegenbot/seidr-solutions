#include <iostream>
#include <cassert>

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
    if(not(below_threshold({1, 8, 4, 10}, 10))) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
}
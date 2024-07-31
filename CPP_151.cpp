```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int double_the_difference(vector<int> lst) {
    int sum = 0;
    for (int num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<int> lst; 

    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        while(true) {
            int num_val;
            cin >> num_val; // get the number
            if (!cin || num_val < 0) { // check if the input is invalid (non-integer or negative)
                cout << "Invalid input. Please enter a valid positive integer.\n";
                cin.clear(); // clear error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the invalid input
            } else {
                lst.push_back(num_val); 
                break; 
            }
        }
    }

    int odd_sum = double_the_difference(lst);

    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
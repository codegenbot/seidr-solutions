#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int double_the_difference(int lst[]) {
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
    int lst[5]; 
    int odd_sum = 0;

    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        do {
            int num_val;
            cin >> num_val;
            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                lst[i] = num_val;
            }
        } while (cin.fail());
    }

    odd_sum = double_the_difference(lst);

    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
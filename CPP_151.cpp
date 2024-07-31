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
    int odd_sum;

    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        do {
            int num;
            cin >> num;
            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (cin.fail());
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
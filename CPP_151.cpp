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

int main_func() {
    int odd_sum;
    vector<int> lst; 
    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        int num;
        while (!(cin >> num)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer: ";
            cin >> num;
        }
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst); 
    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
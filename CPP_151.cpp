```c++
#include <iostream>
#include <vector>
#include <cmath>

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
    int odd_sum = 0;
    vector<int> lst; 
    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        int num;
        while (!(cin >> num)) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }
        lst.push_back(num);
    }

    odd_sum = 0;
    for (int num : lst) {
        if (num % 2 != 0) { 
            odd_sum += num * num; 
        }
    }

    cout << "The difference is: " << double_the_difference(lst) - odd_sum << endl;

    return 0;
}
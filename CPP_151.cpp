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
    int odd_sum;
    vector<int> lst(5); // initialize vector with desired capacity
    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        int num;
        cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst); 
    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
```cpp
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

int main() {
    vector<int> lst; 
    int num;

    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        do {
            cin >> num;
        } while (!(cin));
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        lst.push_back(num);
    }

    int odd_sum = double_the_difference(lst);

    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int double_the_difference(vector<int> lst) {
    int sum = 0;
    for (int num : lst) {
        if (num > 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<int> lst; 

    cout << "Enter elements for the list: ";
    int i = 0;
    while(i < 5) { 
        int num_val = 0;
        for(int j=0;j<3 && i < 5 ;j++){
            cin >> num_val;
            if (cin.fail()) {
                cout << "Invalid input. Please enter a valid integer.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                lst.push_back(num_val);
                i++;
                break; 
            }
        }
    }

    int odd_sum = double_the_difference(lst);

    cout << "The difference is: " << odd_sum << endl;

    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int64_t double_the_difference(vector<int64_t> lst) {
    int64_t sum = 0;
    for (int64_t num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    int64_t odd_sum;
    vector<int64_t> lst; 
    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        int64_t num;
        cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst); 
    cout << "The difference is: " << odd_sum << endl;

    return 0;
}